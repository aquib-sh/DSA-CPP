/** Author: Shaikh Aquib */

#include <iostream>

int main() {

    // Getting rows input
    int rows;
    std::cin >> rows;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= ((rows + 1) - i); j++) {
            std::cout << j
                      << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

