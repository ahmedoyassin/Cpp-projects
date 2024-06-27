

#include <iostream>
#include <string>
void print(std::string & msg)
{
    std:: cout << msg << "\n";
}

int main(){

    int a =10;
    int b =20;
    int & ptr = a;
    std:: cout << ptr << "\n";
    std::string msg = "ahmed";
    std::string msg1 = "ahmed";
    print(msg);
    print(msg1);
    // ptr = b; //ERRRRRRORR!!!!!!!!!!
}