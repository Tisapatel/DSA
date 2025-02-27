#include <iostream>
using namespace std;

int main() {
    int n = 4; 

    for (int i = 1; i <= n; i++) {


        // increasing number
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // for spaces
        int spaces = (n - i) * 4; 
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // decreasing number
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}