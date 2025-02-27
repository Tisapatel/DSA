#include <iostream>
using namespace std;

int main() {

    // Traspose Matrix Array's
    
    int n;
    cout << "Enter the array's row & column size: ";
    cin >> n;

    int arr[n][n], transpose[n][n];

    cout << "Enter array's elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "The transpose matrix of an array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}