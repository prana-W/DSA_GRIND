#include <iostream>
using namespace std;

//Revising lecture-33 (Recursion and linear and binary search)

//checks if the array is sorted or not using recursion
bool isSorted (int* arr, int size) {

    if (size == 0 || size == 1) return true;//base case

    if (arr[0] > arr[1]) return false;

    //recursive call
    else {
       bool ans = isSorted (arr+1, size-1);
       return ans;
    }
}

//make a recursive function that returns the sum of the array
int getSum (int* arr, int size) {
    if (size == 0) return 0;

    int sum = arr[0] + getSum (arr+1, size-1);

    return sum;
}

//Linear search (using recursion)
bool linearSearch (int* arr, int size, int key) {
    //base case
    if (size == 0) return false;

    //Processing
    if (arr[0] == key) return true;
    else {
        bool ans = linearSearch (arr+1, size-1, key); //Recursive call
        return ans;
    }
}

//Binary search (using recursion)
bool binarySearch (int* arr, int size, int key, int i, int j) {
    int mid = i + (j-i)/2;

    if (i > j) return false; //base case

    if (arr[mid] == key) return true; //processing

    if (arr[mid] > key) {
        return binarySearch (arr, size, key, i, mid-1);//Recursive call
    }

    else {
       return binarySearch (arr, size, key, mid+1, j);//Recursive call
    }


}

//doing by loops
int firstOccurence_loops (int* arr, int size, int key) {
    int s = 0;
    int e = size-1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e-s)/2;

        if (arr[mid] == key) {
            ans = mid;
            e = mid-1;
        }

        else if (arr[mid] < key) {
            s = mid + 1;
        }

        else {
            e = mid-1;
        }
    }

    return ans;
}

//doing by recursion
int firstOccurrence (int* arr, int size, int key, int s, int e, int ans = -1) {
        if (s > e) return ans; //base case

        int mid = s + (e-s)/2;

        //Recursive calls
        if (arr[mid] == key) {
            ans = mid;
            return firstOccurrence(arr, size, key, s, mid-1, ans); // e = mid-1
        }

        else if (arr[mid] < key) {
            return firstOccurrence (arr, size, key, mid+1, e, ans); // s = mid+1
        }

        else {
            return firstOccurrence (arr, size, key, s, mid-1, ans); // e= mid-1
        }
    }

int lastOccurrence (int*  arr, int size, int key, int s, int e, int ans = -1) {
    if (s > e) return ans; //base case

int mid = s + (e-s)/2;

    if (arr[mid] == key) {
        ans = mid;
        return lastOccurrence (arr, size, key, mid+1, e, ans);
    }

    else if (arr[mid] < key) {
        return lastOccurrence(arr, size, key, mid+1, e, ans);
    }

    else {
        return lastOccurrence(arr, size, key, s, mid-1, ans);
    }

}

int totalOccurence (int* arr, int size, int key, int s, int e, int ans = -1) {
    if (firstOccurrence(arr, size, key, s, e, ans) == -1) return 0;
    int total = lastOccurrence(arr, size, key, s, e, ans) - firstOccurrence(arr, size, key, s, e, ans) + 1;

    return total;
}

//Peak in a mountain
int peakMountain (int* arr, int size, int s, int e) {

}

int main() {
int arr[] = {2,3, 6, 6, 6, 8, 8, 9, 9, 10};
int n = sizeof(arr)/sizeof(int);

// if (isSorted(arr, 3)) cout << "yeahhh!" << endl;
// else cout << "Not yeahhh!!" << endl;
// cout << "Sum: " << getSum(arr, 3);
// if (linearSearch(arr, 3, 6)) cout << "yoo!";
// else cout << "Not yoooo!";

// if (binarySearch(arr, 3, 5, 0, 2)) cout << "yoo!";
// else cout << "Not yoooo!";

//first occurence
int key = 8;

cout << "By loop: " << firstOccurence_loops (arr, n, key) << endl;
cout << "By recursion: " << firstOccurrence (arr, n, key, 0, n-1) << endl << endl;


cout << "By recursion: " << lastOccurrence (arr, n, key, 0, n-1) << endl << endl;


cout << "By recursion: " << totalOccurence (arr, n, key, 0, n-1) << endl;


}