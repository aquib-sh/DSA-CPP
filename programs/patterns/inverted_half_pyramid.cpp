#include <iostream>

int main() {
    
    // Getting rows input
    int rows;
    std::cin >> rows;

    for(int i = 0; i < rows; i++) {
        // Print * if rows - i times
        for(int j = 0; j < rows - i; j++) {
            std::cout << " * ";
        }
        // Line break after each row
        std::cout << std::endl;
    }
    return 0;
}
