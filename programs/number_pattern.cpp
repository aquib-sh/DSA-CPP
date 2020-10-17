/** Author: Shaikh Aquib */

#include <iostream>

int main() {
    
    // Getting rows input
    int rows;
    std::cin >> rows;

    for(int i = 1; i <= rows; i++) {
        
        // Printing spaces 
        for(int j = 1; j <= (rows - i); j++) {
           std::cout << "  ";
        }

        // Printing number uptill i
        for(int j = 1; j <= i; j++) {
            std::cout << " "
                      << j
                      << " ";
        }

        // Line break after each row
        std::cout << std::endl;
    }
    return 0;
}


