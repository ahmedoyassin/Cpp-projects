

#include <iostream>

constexpr int sum(const int a, const int b){

    return a+b;

}

int main(int argc, char **argv){

    const  int val = sum(1,2);
    std::cout <<val;
}