#include<iostream>

int main() {

    //getting inputs for rows and columns required
    int rows, columns;

    std::cin >> rows 
             >> columns;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            std::cout << " * ";
        }
       std::cout << std::endl;
    }

}
