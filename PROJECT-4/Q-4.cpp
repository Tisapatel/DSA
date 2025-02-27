#include <iostream>
using namespace std;

int main() {

    // sum of row & column of 2D Array's 

    int rowSize, colSize;

    cout << "Enter the array's row size: ";
    cin >> rowSize;
    cout << "Enter the array's column size: ";
    cin >> colSize;

    int a[rowSize][colSize];

    cout << "Enter array's elements:" << endl;
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    int rowSum = 0, colSum = 0;
    int row, col;


    cout << "Enter the row number: ";
    cin >> row;
    cout << "Enter the column number: ";
    cin >> col;


    for (int j = 0; j < colSize; j++) {
        rowSum += a[row][j];
    }

    for (int i = 0; i < rowSize; i++) {
        colSum += a[i][col];
    }

    // Output the results
    cout << endl;
    cout << "Sum of elements in row " << row << ": " << rowSum << endl;
    cout << "Sum of elements in column " << col << ": " << colSum << endl;
    cout << endl;

    return 0;
}