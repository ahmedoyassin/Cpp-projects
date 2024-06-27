

#include <iostream>

int main(){

    int a =10;
    int *ptr = &a;
    std:: cout << ptr << "\n"; // prints the address of the pointer
    std:: cout << *ptr << "\n"; // prints the value inside a
}