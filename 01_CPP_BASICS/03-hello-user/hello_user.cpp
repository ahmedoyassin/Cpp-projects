


/**
 * Request: 
 *          a. Username.
 *          b. age.
 * output:
 *          Hello {username}, age = {age}
 * 
 */

#include <iostream>
#include <string>

int main(){
    /**
     * variables
     * datatypes
     */
        std::string name;
        int age;

        std:: cout << "Enter your name \n";
        std:: cin >> name;

        std:: cout << "Enter your age \n";
        std::cin >> age;

        std::cout <<"Hello " << name << ", Your age is " << age;


}