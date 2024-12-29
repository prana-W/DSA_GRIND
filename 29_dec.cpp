#include <iostream>
using namespace std;


//creating a 1-D array dynamically
void create_arr (int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cin >> *(arr+i);
    }
}

//printing
void print_arr (int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(arr+i) << " ";
    }
}
 
int main() {
//     int n;
//     cin >> n;

// // 1-D array using dynamic memory allocation
// int *arr = new int[n];

//     create_arr (arr, n);
//     print_arr (arr, n);

//     delete []arr;

//     print_arr (arr, n);


    int row, col;
    cin >> row >> col;

//2-D array using dynamic memory allocation
int **arr2D = new int* [row];
for (int i = 0; i < row; i++) {
    *(arr2D+i) = new int[col];
}

//creating a 2-d array
for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
        cin >> *(*(arr2D+i) + j);
    }
}

//printing
for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
        cout << arr2D[i][j] << " ";
    }
    cout << endl;
}

for (int i = 0; i < row; i++) {
    delete [] arr2D[i];
}

delete [] arr2D;

    

}