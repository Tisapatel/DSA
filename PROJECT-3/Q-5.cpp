#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
       
        for (int j = n; j > i; j--) {
            cout << "  ";
        }
      
        for (int j = 1; j < i; j++) {
            cout << j << " ";
        }
        
        for (int j = i; j > 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5; // Change this value to print more or fewer rows
    printPattern(n);
    return 0;
}