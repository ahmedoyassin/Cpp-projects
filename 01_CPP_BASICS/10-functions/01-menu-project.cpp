

/**
 *  simpple program that provides you a menu for food outlet (1. Fries $3 - 2. Burger $6 - 3. Meal $8)
 *  Users should be able to select option from a menu and we will present the price information based on that choice :)
*/

#include <iostream>

#define ZERO_OPTION 0
#define FRIES_OPTION 1
#define BURGER_OPTION 2
#define MEAL_OPTION 3
#define EXIT_OPTION 4
int userselction()
{
    int MenuOption = ZERO_OPTION;
    std::cin >> MenuOption;
    return MenuOption;
}

int main()
{
    std::cout << "Hello Welecome to the food outlet \nPlease Select what you want from the menu \n1. Fries - $3 \n2. Burger - $6\n3. Meal (Burger and Fries) - $8 \n4. Exit \n";
    int MenuOption = userselction();
    switch (MenuOption)
    {
    case FRIES_OPTION: std:: cout <<"Your order is $3 only\n"; break;
    case BURGER_OPTION: std:: cout <<"Your order is $6 only\n"; break;
    case MEAL_OPTION: std:: cout <<"Your order is $8 only\n"; break;
    case EXIT_OPTION: std:: cout <<"You did choose exit\n"; break;
    default: std:: cout <<"You did choose wrong number please re-choose another number :)\n"; break;
    }
    std:: cout <<"Thank you for choosing our food outlet\n";
}