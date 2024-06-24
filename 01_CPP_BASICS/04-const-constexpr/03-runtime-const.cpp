

#include <iostream>

int sum(const int a, const int b){

    return a+b;

}

int main(){

    const int val = sum(1,2);
    std::cout <<val;
}