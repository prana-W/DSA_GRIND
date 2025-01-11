#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Revising lec-38, 39

// lec-38
void printString(vector<string> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

void solve(string digit, int index, vector<string> &ans, string &output, string *map)
{

    //base case
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }

    int num = digit[index] - '0';

    string val = map[num];

    for (int i = 0; i < val.length(); i++)
    {
        output.push_back(val[i]);
        solve(digit, index + 1, ans, output, map);
        output.pop_back(); // backtracking
    }
}

// lec-39
void solve (string& input, int index, vector<string>& ans) {

    //base case
    if (index >= input.length()) {
        ans.push_back(input);
        return;
    }

    for (int i = index; i < input.length(); i++) {
        swap (input[index], input[i]);
        solve (input, index+1, ans);
        swap(input[index], input[i]); //backtracking
    }

}

int main()
{
    //lec-38
    { /*
         string digit = "489";
         string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
         vector<string> ans;
         string output;
         solve (digit, 0, ans, output, map);
         printString (ans);
         */
    }

    //lec-39
    {
        string inp = "abc";
        vector<string> ans;

        solve (inp, 0, ans);
        sort(ans.begin(), ans.end()); //to give answer like in a dictionary

        printString (ans);

    }


}