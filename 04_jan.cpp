#include <iostream>
using namespace std;

// Revising lec-34

// Printing an array
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// reversing a string using recursion
void reverse(string &s, int i, int j)
{

    if (i > j)
        return;

    swap(s[i], s[j]);
    i++;
    j--;

    // Recursive call
    reverse(s, i, j);
}

// reversing a string using recursion (using only single pointer (i.e. only i))
void reverse2(string &s, int i = 0) // we have set a default argument
{

    int n = s.length();

    if (i > n - i - 1)
        return;

    swap(s[i], s[n - i - 1]);
    i++;

    // Recursive call
    reverse2(s, i);
}

// check palindroeme (using recursion)
bool isPalindrome(string s, int i, int j)
{
    if (i > j)
        return true;

    if (s[i] != s[j])
        return false;

    else
    {

        return isPalindrome(s, i + 1, j - 1);
    }
}

// check palindroeme (using recursion)-  using single pointer
bool isPalindrome2(string s, int i = 0)
{
    int n = s.length();

    if (i > n - i - 1)
        return true;

    if (s[i] != s[n - i - 1])
        return false;

    else
    {

        return isPalindrome2(s, i + 1);
    }
}

// Finding power using recursion
int power(int a, int b)
{
    if (b == 0)
        return 1;

    // odd condition
    if (b & 1)
    {
        int newP = power(a, b / 2);
        return a * newP * newP;
    }

    // even condition
    else
    {
        int newP = power(a, b / 2);
        return newP * newP;
    }
}

// Bubble sort (using recursion)
void bubbleSort(int *arr, int n)
{

    if (n == 0 || n == 1)
    {
        return;
    }

    int i = 0;
    int j = i + 1;

    // placing the first largest element in the right postiton
    while (j < n)
    {
        if (arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
        }
        i++;
        j++;
    }

    // recursive call
    bubbleSort(arr, n - 1); // since largest element already at the end, we want to pass the rest of the arr
}

// Selection sort (using recursion)
void selectionSort(int *arr, int n, int i = 0)
{
    if (i >= n)
        return; // base case

    // Place the first smallest element at the correct position
    int minIndex = i;
    for (int j = i; j < n; j++)
    {
        if (arr[j] < arr[minIndex])
        {
            minIndex = j;
        }
    }

    swap(arr[i], arr[minIndex]);

    selectionSort(arr, n - 1, i + 1); // Now the smallest element is the the ith place. Now do selectionSort in the remaining array (so size decreses by one and the i increses)
}

// Insertion sort (using recursion)
void insertionSort2(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        int temp = arr[j];

        while (temp < arr[j - 1] && j - 1 >= 0)
        {
            arr[j] = arr[j - 1];
            j--;
        }

        arr[j] = temp;
    }
}

void insertionSort(int *arr, int n)
{
    if (n == 0 || n == 1)
        return;

    insertionSort(arr, n - 1); // sort the n-1 element

    // Putting the last element at the correct location
    int j = n - 1;
    int temp = arr[j];

    while (j - 1 >= 0 && temp < arr[j - 1])
    {
        arr[j] = arr[j - 1];
        j--;
    }

    arr[j] = temp;
}

int main()
{

    // cout << endl;
    // string name = "Pranaw";
    // reverse(name, 0, name.length() - 1);
    // cout << name << endl;
    // string n2 = "caacaac";
    // reverse2 (n2);
    // cout << n2 << endl;
    // isPalindrome(n2, 0, n2.length()-1) ? cout << "Yes" << endl : cout << "No" << endl;
    // isPalindrome2(n2) ? cout << "Yes" << endl : cout << "No" << endl;
    // cout << power (2, 10);

    int arr[4] = {10, 2, 9, -59};
    int size = sizeof(arr) / sizeof(int);

    //     bubbleSort(arr, size);
    //    printArray(arr, size);

    //    selectionSort(arr, size);
    //    printArray(arr, size);

    insertionSort(arr, size);
    printArray(arr, size);
}
