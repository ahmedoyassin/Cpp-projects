


/** 
 * get username & age from input stream
 * print "Hello {username}, Your age {age}"
 */

#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age = 0;
    std::cout <<"Please enter your name" << std::endl;
    std::cin >> name;

    std::cout <<"Please enter your age" << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << ", your age is "<< age << std::endl;

}
