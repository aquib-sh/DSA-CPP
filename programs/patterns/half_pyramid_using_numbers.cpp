/*** Author: Shaikh Aquib */

#include <iostream>

int main() {
    
    // Getting rows input
    int rows;
    std::cin >> rows;

    /*** We will use rows + 1 because
         row containing 0 won't print anything
    */

    for(int i = 0; i < rows + 1; i++) {
        for(int j = 0; j < i; j++) {
            std::cout << i;
        }
        // Line break after each row
        std::cout << std::endl;
    }
    return 0;
}
