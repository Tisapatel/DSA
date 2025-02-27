#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows in the pattern

    for (int i = rows; i >= 1; --i) {
        // Print leading spaces for indentation
        for (int j = rows; j > i; --j) {
            std::cout << " ";
        }

        // Print the alternating 1s and 0s
        for (int k = 1; k <= i; ++k) {
            std::cout << (k % 2 == 1 ? '1' : '0');
        }

        std::cout << std::endl;
    }

    return 0;
}