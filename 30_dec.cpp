#include <iostream>
#include <string.h>
using namespace std;

//Revising lec-22 (char, string)
//Revising lec-31,32

int fib(int n) {
    if (n==0) return 0;
    if (n==1) return 1;

    return fib(n-1) + fib(n-2);

}

void func(int n, string* arr) {
    if (n==0) return;

    int digit = n%10;
    func(n/10, arr);
    cout << arr[digit] << " ";
}

int power (int a, int b) {
    if (b==0) return 1;

    int ans = a*power(a,b-1);

    return ans;
}

int main () {
    {

        //lec- 22

    /*
    string s;
    char ch[100];
    //cin >> s;
    cin.getline (ch, 100); //(only works with a char arr)
    //cin.get (s, 100);
    //cin.getline (s);

    //cout << s << endl;
    cout << ch << endl;


    char ch[50];

    ch[0] = 'a';
    ch[1] = '\0';
    ch[2] = 'c';
    ch[3] = '\0';

    cout << strlen(ch) << endl;
    cout << ch << endl;


    string s;

    s.push_back('a');
    s.push_back('\0');
    s.push_back('c');
    s.push_back('\0');

    cout << s.size() << endl;
    

    cout << s << endl;

    getline(cin, s);
    cin.getline(ch, 10);
    cout << ch << endl;
    cout << s << endl;

    string str = "daabcbaabcbc";

    cout << str.find("p");
    */

}

{

    //Lec-31,32

//fibonacci using for loop

// int a = 0;
// int b = 1;
// int n;
// cout << "Total terms: " << endl;

// cin >> n;

// for (int i = 2; i <= n; i++) {
//      if (i==0) cout << 0 << " ";
//     if (i==1) cout << 1 << " ";

//     int ans = a+b;

//     if (i==n) cout << ans << " ";

//     a = b;
//     b = ans;
// }

// int n;
// cin >> n;

// cout << fib(n);

}

//Program that says the digit

// string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

// int n;
// cout << "Enter number: " << endl;
// cin >> n;

// func(n, arr);

//classwork of lec-34

int a, b;

cin >> a >> b;

cout << "Ans: " << power(a, b) << endl;



}