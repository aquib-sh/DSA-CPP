#include <iostream>

int main() {

    // Getting rows input
    int rows;
    std::cin >> rows;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < rows; j++) {
            if(j < rows - (i + 1)) {
                std::cout << "   ";
            }
            else {
                std::cout << " * ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}


