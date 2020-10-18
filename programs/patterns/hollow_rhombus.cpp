/** Author: Shaikh Aquib */

#include <iostream>

int main() {

    // Getting n as input
    int n;
    std::cin >> n;

    for(int i = 1; i <= n; i++) {
        // Printing spaces
        for(int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Printing stars and spaces
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        // Line break after every row
        std::cout << std::endl;
    }
    return 0;
}
