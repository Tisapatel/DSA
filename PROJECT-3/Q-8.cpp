#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    // Print first row
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
    for (int i = 1; i < n; i++) {
        cout << "    *" << endl; 
    }

    return 0;
}