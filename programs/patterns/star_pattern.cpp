/** Author: Shaikh Aquib */

#include <iostream>

int main() {
    
    // Getting n input
    int n;
    std::cin >> n;

    // First half of star

    for(int i = 1; i <= n; i++) {
        
        // Printing spaces
        for(int j = 1; j <= n - i; j++) {
            std::cout << "   ";
        }    

        // Printing stars
        for(int j = 1; j <= 2 * (i - 1); j++) {
            std::cout << " * ";    
        }
        
        // Line break after each row
        std::cout << std::endl;

    }

//-----------------------------------
//Second half of star

    for(int i = n; i >= 1; i--) {
        
        // Printing spaces
        for(int j = 1; j <= n - i; j++) {
            std::cout << "   ";
        }    

        // Printing stars
        for(int j = 1; j <= 2 * (i - 1); j++) {
            std::cout << " * ";    
        }

        // Line break after each row
        std::cout << std::endl;

    } 
    return 0;
}

