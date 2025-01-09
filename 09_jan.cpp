#include <iostream>
#include <vector>
using namespace std;

//Revising lec-37

//Printing the 2-d array
void printArr (vector<vector<int>> arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printarr (vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

//Actual function
void subsets (vector<int> arr, vector<int>& ans, vector<vector<int>>& finalAns, int i = 0) {

    //base case
    if (i >= arr.size()) {
        finalAns.push_back(ans);
        //ans.pop_back();//since we want to exclude the inserted element now, because the next step is of excluding
        return;
    }

    //exclude wala
    subsets(arr, ans, finalAns, i+1);

    //include wala
    ans.push_back(arr[i]);
    subsets(arr, ans, finalAns, i+1);

}

//for strings
void solve (string s, vector<string>& ans, string output, int i = 0) {

    //base case
    if (i >= s.length()) {
        ans.push_back(output);
        return;
    }

    //exclude wala case
    solve (s, ans, output, i+1);

    //include wala case
    output.push_back(s[i]);
    solve(s, ans, output, i+1);

}

//Printing the subsequence of a string
void printSubsequence (vector<string> s) {
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << endl;
    }
}

int main() {
    // vector<int>arr = {1, 2 ,3};
    // vector<vector<int>> ans;
    // vector<int> output;
    // subsets (arr, output, ans);
    // printArr (ans);

    string str = "abc";
    vector<string> ans;
    string out;

    solve (str, ans, out);
    printSubsequence(ans);

}

