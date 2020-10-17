#include<iostream>

int main() {

    int num        = 10;
    long num1      = 10;
    short int num2 = 10;
    float num3     = 10;
    double num4    = 10;

    std::cout<<"Integer: " 
             << sizeof(num)
             << "\n";
    
    std::cout<<"Long: "    
             << sizeof(num1) 
             << "\n";
    

    std::cout<<"Short Integer: " 
             << sizeof(num2) 
             <<"\n";
    

    std::cout<<"Float: " 
             << sizeof(num3)
             << "\n";
    

    std::cout<<"Double: " 
             << sizeof(num4)
             << "\n";;

}
