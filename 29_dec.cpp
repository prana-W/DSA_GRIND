#include <iostream>
using namespace std;

//Lect-(28, 29, 30) revision

//Dynamic memory allocation for 1-d
//for 2d
//Jaggered array
//Important Keywords

//(note: never use ; at the end of a macro)
#define PI 3.1456//object-like macro
#define DATE DAY//chain macro
#define DAY 27

#define ok 1, \
           2, \
           3


#define Area_circle(r) PI*r*r
#define min(a,b) (a < b) ? a : b


int x = 5; //Global variable

//inline functions
inline int minElement (int a, int b) {
    return (a < b)? a : b;
}

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

//default arguments
void wtf (int a, int b, int c = 5, int d = 4) {
    cout << a << " " << b << " " << c << " " << d << endl;
}
 
int main() {

    {

        /*
    int n;
    cin >> n;

// 1-D array using dynamic memory allocation
int *arr = new int[n];

    create_arr (arr, n);
    print_arr (arr, n);

    delete []arr;

    print_arr (arr, n);

    */
    }

    {
        /*

    int row, col;
    cin >> row >> col;

//2-D array using dynamic memory allocation
int **arr2D = new int* [row];
for (int i = 0; i < row; i++) {
    *(arr2D+i) = new int[col];//arr[i] = new int[col];
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

*/
    }
{
    /*
//dynamically creating jaggered array

int row;
cout << "Enter the no. of rows: " << endl;
cin >> row;

int** arr = new int* [row];

cout << "Enter the no. of col in each row: " << endl;

//creating a size array for each array correaponding to a row
int *size = new int [row];
for (int i = 0; i < row; i++) {
    cin >> size[i];
}


for (int i = 0; i < row; i++) {
    arr[i] = new int [size[i]];
}

cout << "Enter the elements: " << endl;
//creating array
for (int i = 0; i < row; i++) {
    for (int j = 0; j < size[i]; j++) {
        cin >> arr[i][j];
    }
}

cout << "The array is: " << endl;
//Printitng the jaggered array
for (int i = 0; i < row; i++) {
    for (int j = 0; j < size[i]; j++) {
        cout << arr[i][j] << " ";
    }

    cout << endl;
}

//releasing memory
delete [] size;
for (int i = 0; i < row; i++) {
    delete [] arr[i];
}
delete [] arr;

*/

}

    
{
    /*
    //Lecture-30 (Important keywords)

    cout << PI << endl;
    cout << DATE << endl;
    cout << DAY << endl;
    // cout << &PI;//error (since PI doesn't have any memory, it only replaces by 3.14)
    int arr[3] = {ok};
cout << arr[1] << endl;

cout << "Area of a 2 unit radius circle: " << Area_circle(2) << endl;

int minimum = minElement(5, 3); //since inline- minElement (5, 3) replaced by 3 (here)
cout << minimum << endl;

//default value of c = 5 and d = 4
wtf (2, 3, 6, 8);
wtf (2, 3, 6);
wtf (2, 3);

// const int y;//const must be initilased during declarartion
// y = 5;

const int val = 5;
cout << val << endl;

*/
}
}
