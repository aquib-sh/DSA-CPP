/** Author: Shaikh Aquib */

#include <iostream>

int main() {

    // Getting rows input
    int rows;
    std::cin >> rows;

    for(int i = 0; i < rows; i++) {
        
        // Printing spaces 
        for(int j = 0; j < (rows - (i + 1)); j++) {
            std::cout << " ";
        }

        // Printing stars
        for(int j = 0; j < rows; j++) {
            std::cout << "*";
        }

        // Line break after every row
        std::cout << std::endl;
    }
    return 0;
}

                
