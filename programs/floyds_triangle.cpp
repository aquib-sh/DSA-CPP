/*** Author: Shaikh Aquib */

#include <iostream>

int main() {

    //Getting rows input
    int rows;
    std::cin >> rows;

    // Counter variable for printing the value and incrementing
    int count = 1;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++) {
            std::cout << count 
                      << " ";
            count++;
        }
        // Line break after each row
        std::cout << std::endl;
    }
    return 0;
}
