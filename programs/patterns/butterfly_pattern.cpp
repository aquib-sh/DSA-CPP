/*** Author: Shaikh Aquib */

#include <iostream>

int main() {

    // Getting rows input
    int rows;
    std::cin >> rows;

    // First half of the butterfly
    for(int i = 1; i <= rows; i++) {
        
        // Print stars
        for(int j = 1; j <= i; j++) {
            std::cout << " * ";
        }

        // Print spaces
        for(int j = 1; j <= ((2 * rows) - (2 * i)); j++) {
            std::cout << "   ";
        }

        // Print stars again
        for(int j = 1; j <= i; j++) {
            std::cout << " * ";
        }
        // Line break after every row
        std::cout << std::endl;
    }

//---------------------------------------

   // Next half of the butterfly 
    for(int i = rows; i >= 1; i--) {
       
        // Print stars
        for(int j = 1; j <= i; j++) {
            std::cout << " * ";
        }

        // Print spaces
        for(int j = 1; j <= ((2 * rows) - (2 * i)); j++) {
            std::cout << "   ";
        }

        // Print stars again
        for(int j = 1; j <= i; j++) {
            std::cout << " * ";
        }
        // Line break after every row
        std::cout << std::endl;
    }

    return 0;
} 
