#include <iostream>
#include <string.h>
using namespace std;

//Revising lec-22 (char, string)

int main () {
    // string s;
    // char ch[100];
    // //cin >> s;
    // cin.getline (ch, 100); //(only works with a char arr)
    // //cin.get (s, 100);
    // //cin.getline (s);

    // //cout << s << endl;
    // cout << ch << endl;


    char ch[50];

    // ch[0] = 'a';
    // ch[1] = '\0';
    // ch[2] = 'c';
    // ch[3] = '\0';

    //cout << strlen(ch) << endl;
    //cout << ch << endl;


    string s;

    // s.push_back('a');
    // s.push_back('\0');
    // s.push_back('c');
    // s.push_back('\0');

    // cout << s.size() << endl;
    

    // cout << s << endl;

    getline(cin, s);
    cin.getline(ch, 10);
    cout << ch << endl;
    cout << s << endl;
}