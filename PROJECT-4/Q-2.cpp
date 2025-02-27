#include <iostream>
using namespace std;

int main() {

    // Largest Element in 2D Array's
    
    int rows, cols;

    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int arr[rows][cols];

 
    cout << "Enter array's elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }


    int largest = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    cout << endl;
    cout << "Output:" << endl;
    cout << "The largest element is: " << largest << endl;

    return 0;
}