

#include <iostream>
#include <string>



enum class option
{
    ZERO,
    FRIES,
    BURGER,
    MEAL,
    EXIT 
};

void print_msg(const std::string msg)
{
    std:: cout << msg << "\n";

}

class Menu
{
    public:
    // variables (nounes) ----> menu contains what? Options
    // Functions (verbs)  ----> what do I need from the menu? show the menu.
    void show()
    {
        print_msg("Menu");
        print_msg("1. Fries $3");
        print_msg("2. Burger $6");
        print_msg("3. Meal $8");
        print_msg("4. Exit");
    }
};
std::istream& operator>>(std::istream & input_stream, option & result)
{
    int int_option;
    input_stream >> int_option;
    // convert integer ----> option enum.
    result = static_cast<option>(int_option);
    return input_stream;
}

    option userselction()
    {
    option MenuOption = option::ZERO;
    std::cin >> MenuOption;
    return MenuOption;
    }

int main(){

    //creating new object from Menu
    Menu new_menu;
    new_menu.show();
    option MenuOption = userselction();
    switch (MenuOption)
    {
    case option::FRIES: std:: cout <<"Your order is $3 only\n"; break;
    case option::BURGER: std:: cout <<"Your order is $6 only\n"; break;
    case option::MEAL: std:: cout <<"Your order is $8 only\n"; break;
    case option::EXIT: std:: cout <<"You did choose exit\n"; break;
    default: std:: cout <<"You did choose wrong number please re-choose another number :)\n"; break;
    }
    std:: cout <<"Thank you for choosing our food outlet\n";
}