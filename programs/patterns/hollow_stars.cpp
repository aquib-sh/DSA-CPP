#include<iostream>

int main() {
    
    // Getting number of rows and columns input
    int rows, columns;
    
    std::cin >> rows
             >> columns;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            
            // Printing * when i is first or last row
            // Printing * when j is first element of row or last element in a column
            // Else print *

            if(i == 0 || i == (rows - 1) || j == 0 || j == (columns - 1)) {
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
