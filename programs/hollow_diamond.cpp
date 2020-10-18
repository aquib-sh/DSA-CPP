// Author: Shaikh Aquib

#include <iostream>

int main() {

    // Getting n as input which stands for number of rows in half part of pattern
    int n;
    std::cin >> n;

// First half of hollow diamond

    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Print stars and spaces
        for(int j = 1; j <= (2 * i) - 1; j++) {
            // Print star in start and end
            if(j == 1 || j == (2 * i) - 1) {
                std::cout << "*";
            }
            // Print spaces in between
            else {
                std::cout << " ";
            }
        }
        // Line break after each row
        std::cout << std::endl;
    }

//-----------------------------------------
// Second half of hollow diamond

    for(int i = n; i >= 1; i--) {
        // Print spaces
        for(int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Print stars and spaces
        for(int j = 1; j <= (2 * i) - 1; j++) {
            // Print star in start and end
            if(j == 1 || j == (2 * i) - 1) {
                std::cout << "*";
            }
            // Print spaces in between
            else {
                std::cout << " ";
            }
        }
        // Line break after each row
        std::cout << std::endl;
    }
    return 0;
}
