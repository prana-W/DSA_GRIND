#include <iostream>
using namespace std;

// Revising lec-23 (2-D arrays)

// To Print the elements in a spiral manner
void spiralPrint(int arr[][3], int row)
{
    int sRow = 0, sCol = 0, eRow = row - 1, eCol = 2;
    int cnt = 0;

    while (cnt < row * 3)
    {

        for (int col = sCol; col <= eCol; col++)
        {
            cout << arr[sRow][col] << " ";
            cnt++;
        }
        cout << endl;
        sRow++;
        for (int row = sRow; row <= eRow; row++)
        {
            cout << arr[row][eCol] << " ";
            cnt++;
        }
        cout << endl;
        eCol--;
        for (int col = eCol; col >= sCol; col--)
        {
            cout << arr[eRow][col] << " ";
            cnt++;
        }
        cout << endl;
        eRow--;
        for (int row = eRow; row >= sRow; row--)
        {
            cout << arr[row][sCol] << " ";
            cnt++;
        }
        cout << endl;
        sCol++;
    }
}

// Binary Search Type-I in 2-D array
bool binarySearch(int arr[][4], int row, int key)
{
    int n = row * 4;
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {

        int mid = s + (e - s) / 2;
        int i = mid / 4;
        int j = mid % 4;

        if (arr[i][j] < key)
        {
            s = mid + 1;
        }

        else if (arr[i][j] > key)
        {
            e = mid - 1;
        }

        else
        {
            return true;
        }
    }

    return false;
}

// Binary Search Type-II in 2-D array
bool binarySearchII(int arr[][5], int row, int key)
{
    int n = row * 5;

    int Row = 0;
    int Col = 4; // end wala

    while (Row < row && Col < 5)
    {

        int val = arr[Row][Col];

        if (val > key)
        {
            Col--;
        }

        else if (val < key)
        {
            Row++;
        }

        else
        {
            return true;
        }
    }

    return false;
}

int main()
{
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // spiralPrint(arr, 3);
    // if (binarySearch(arr, 3, 2)) {
    //     cout << "YESSS!!" << endl;
    // }
    // else {
    //     cout << "NOOO!" << endl;
    // }
    // int arr[4][5] = {1, 4, 7, 11, 15, 2, 5, 8, 12, 19, 3, 6, 9, 16, 22, 10, 13, 14, 17, 24};
    // binarySearchII (arr, 4, 25) ? cout << "YESSSSS!!!" : cout << "NOOOOOOOO";
}
