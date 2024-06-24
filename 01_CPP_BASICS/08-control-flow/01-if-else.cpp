

#include <iostream>

void checkdata(int data)
{
    if(data ==10 )
    std::cout << "Data equals 10 \n";
    else
    std::cout << "Data doesn't equal 10";
}

int main(){
    int data =10;
    checkdata(data);
}