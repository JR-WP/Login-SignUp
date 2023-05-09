#include "main_header.h"



std :: string intro();
std :: string eUser();
int main()
{
//intro starts the program. This will ask if the user is new or existing
intro();
return 0;
}

std :: string intro(void)
{
    WrongInput:
    system("cls");
std :: cout << "Are you a new or existing user? \n";
std :: cout << "Enter 'new' for a new user and 'curr' for an existing user \n";
std :: string UI{};
std :: cin >> UI;
if(UI == "new")
{
    std :: cout << "Username must be at least 8 characters long and at most 16 characters long.\n";
    std :: cout << "Passwords must contain and Upper and Lowercase letter, ";
    std :: cout << "a special character { * ! or - } and a number.\n";
    newUser();
}
    else if(UI == "curr")
    {
        eUser();
    }
        else
        system("cls");
        goto WrongInput;

return "";
}
