

#include <iostream>
#include <array>
#include <string>
using namespace std;

constexpr int MAX_SIZE = 100; // Max size of the database


int user_id=0,user_jd=0; // counters

array<string, MAX_SIZE> Users{};
array<int,MAX_SIZE> Age{};

enum class options{

    add =1,
    fetch,
    quit
};

void print_msg(const std::string msg)
{
    cout << msg;
}

class USER_INFO
{
    public:
    // variables (nounes) ----> menu contains what? Options
    // Functions (verbs)  ----> what do I need from the menu? show the menu.
    void show()
    {
        print_msg("\n\nPlease Select An Option\n");
        print_msg("1. Add Record\n");
        print_msg("2. Fetch Record\n");
        print_msg("3. Quit \n\n");
        print_msg("Enter Option: ");
    }
    void add_record()
    {
        print_msg("Add User. Please enter username and age:\n");
        print_msg("Name: ");
        cin>> Users[user_id];
        print_msg("\nAge: ");
        cin>> Age[user_id];
        print_msg("User record added successfully");
    }
    void fetch_record()
    {
        print_msg("Fetch Record. Please enter user ID:\n");
        print_msg("User ID: ");
        cin>> user_jd;
        print_msg("User Name: ");
        cout << Users[user_jd];
        print_msg("\nUser Age: ");
        cout << Age[user_jd];
    }
};
std::istream& operator>>(std::istream & input_stream, options & result)
{
    int int_option;
    input_stream >> int_option;
    // convert integer ----> options enum.
    result = static_cast<options>(int_option);
    return input_stream;
}
int main(){
    options option;
    bool isRunning = true;
    print_msg("User SignUp Application");
    USER_INFO signup_window;
    while (isRunning){
    signup_window.show();
    cin >> option;
    switch (option)
    {
        case options::add:
        signup_window.add_record();
        break;
        case options::fetch:
        signup_window.fetch_record();
        break;
        case options::quit:
        isRunning = false;
    };
    user_id++;
    }
    return 0;
}