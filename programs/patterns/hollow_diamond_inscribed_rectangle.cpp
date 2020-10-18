#include <iostream>

int main() {

    // Getting n as input
    int n; 
    std::cin >> n;

    for(int i = 1; i <= n; i++) {
        // Printing first half of stars 
        for(int j = 1; j <= (n + 1) - i; j++) {
            std::cout << "*";
        } 

        // Printing any possible spaces
        for(int j = 1; j <= (2 * i) - 2; j++) {
            std::cout << " ";
        }

        // Printing the next half stars 
        for(int j = 1; j <= (n + 1) - i; j++) {
            std::cout << "*";
        }
        // Line break after every row
        std::cout << std::endl;
    }
    
    //------------------------------------------------
    // Second half of the hollow diamond in rectangle 

    for(int i = n; i >= 1; i--) {
        // Printing first half of stars 
        for(int j = 1; j <= (n + 1) - i; j++) {
            std::cout << "*";
        } 

        // Printing any possible spaces
        for(int j = 1; j <= (2 * i) - 2; j++) {
            std::cout << " ";
        }

        // Printing the next half stars 
        for(int j = 1; j <= (n + 1) - i; j++) {
            std::cout << "*";
        }
        // Line break after every row
        std::cout << std::endl;
    }
    return 0;
}

