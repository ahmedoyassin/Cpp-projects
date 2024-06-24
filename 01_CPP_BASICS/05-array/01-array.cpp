

#include <iostream>
#include <array>

#define NUM0 0
#define NUM1 1
#define NUM2 2
#define NUM3 3
#define NUM4 4
#define NUM5 5


int main(){

    std::array<int, 5> numbers{NUM0, NUM1, NUM2, NUM3, NUM4};
    std::cout << numbers[NUM0] <<"\n";
    std::cout << numbers.front() <<"\n"; //first element
    std::cout << numbers.back() <<"\n"; //last element
    std::cout << numbers.empty() <<"\n"; //checks if the array is empty
    std::cout << numbers.size() <<"\n";
    std::cout << numbers.max_size() <<"\n";
    numbers.fill(NUM0); //fills all the array with 0
    std::cout << numbers.front() <<"\n";
    std::cout << numbers.back() <<"\n";



}