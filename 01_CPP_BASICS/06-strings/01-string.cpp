

#include <iostream>
#include <string>

void stringemptychecker(std::string username)
{

    if(username.empty())
    std::cout << "String is empty \n";
    else
    std::cout << "String is not empty \n";
}

int main(){

    // declare string
    std::string username;

    // init string
    std::string username1 {"ahmed"};

    //assign string
    std::string str1;
    str1 = username1;

    //Capacity

    std::cout << username1 << "\n"; //prints all the string
    std::cout <<"first element of the string is "<< username1[0] << "\n"; //prints the first element of the string
    std::cout <<"size of the string = " <<username1.size() << "\n"; //prints the size of the string
    std::cout <<"length of the string = " << username1.length() << "\n";
    std::cout <<"capacity of the string = " << username1.capacity() << "\n";
    std::cout <<"max size of the string = " << username1.max_size() << "\n";
    stringemptychecker(username1);
    username1.clear(); //clears the string
    stringemptychecker(username1);

    //Modifiers
        username1.append("ahmed"); //append into a string
    std::cout << username1 << "\n"; //prints all the string
            username1.push_back('y'); // push back into a string
    std::cout << username1 << "\n"; //prints all the string
                username1.pop_back(); //pop back the last element of the string
    std::cout << username1 << "\n"; //prints all the string


}