/** Author : Shaikh Aquib */

#include <iostream>

int main() {

    // Getting n input which stands for number of columns
    int n;
    std::cin >> n;

    // There will be only 3 rows
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= n; j++) {
            if( ((i + j) % 4 == 0) || ((i == 2) & (j % 4 == 0))) {
                std::cout << " * ";
            }
            else {
                std::cout << "   ";
            }
        }
        // Line break after every row
        std::cout << std::endl;
    }
    return 0;
}


