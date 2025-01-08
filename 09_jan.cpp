#include <iostream>
using namespace std;

//Revising lec-35, 36

//printing an array
void printArr (int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Merge Sort

void mergeArr (int *arr, int s, int e, int mid) {

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *sec = new int[len2];

    int index = s;

//copying values from the main array 
    for (int i = 0; i < len1; i++) {
        first[i] = arr[index];
        index++;
    }

    index = mid+1;

    for (int i = 0; i < len2; i++) {
        sec[i] = arr[index];
        index++;
    }

    //merging them in a sorted manner
    int i = 0;
    int j = 0;
    int k = s;

    while (i < len1 && j < len2) {
        if (first[i] <= sec [j]) {
            arr[k] = first[i];
            i++;
            k++;
        }

        else {
            arr[k] = sec[j];
            j++;
            k++;
        }
    }

    while (i < len1) {
        arr[k] = first[i];
        i++;
        k++;
    }

    while (j < len2) {
        arr[k] = sec[j];
        j++;
        k++;
    }


//manually releasing memory
    delete []first;
    delete []sec;

}
void mergeSort (int *arr, int s, int e) {

    //basse case
    if (s >= e) return;

    int mid = s + (e-s)/2;

    //left part
    mergeSort (arr, s, mid);

    //right part
    mergeSort(arr, mid+1, e);

    //merging each indivisual parts after merging them.0
    mergeArr (arr, s, e, mid);
    
}

//Quick Sort
void quickSort () {

}


int main() {
    int arr[5] = {89, -56, -896, 0, 5};

    //mergeSort(arr, 0, 4);
    printArr (arr, 5);
}