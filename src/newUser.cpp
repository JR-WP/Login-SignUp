#include "main_header.h"


/*

dataTransfer, new User, checker call
newUser():
Takes a username and password and sends them to checker().

If the checker() returns
    True: dataTransfer() will be called and the information will be sent.
    False: The label "tryAgain" will be used to ask the user to re-input the information.

dataTransfer():
Sends the approved information to a user specified file.

*/




bool checker(std :: string username, std :: string password);
std :: string dataTransfer(std :: string user_Name, std :: string pass_Word);

std :: string newUser(void)
{
    tryAgain: //label

std :: string userN{};
std :: cout << "Enter a username: ";
std :: cin >> userN;
std :: cout << "\n";

std :: string pw{};
std :: cout << "Enter a pw: ";
std :: cin >> pw;

if(checker(userN,pw) == true)
{
    std :: cout << "Data has been transfered! \n";
    //dataTransfer( userN, pw );
}
else
{
    goto tryAgain; //label used to send the user back to the start of the newUser().
}
    return "";
}

/*
std :: string dataTransfer(std :: string _userName, std :: string _passW0rd)
{
// ofstream is used for writing files
// We'll make a file called someFile.txt
std :: ofstream outfacc_sql{ "someFile.txt" };

    // If we couldn't open the output file stream for writing
    if (!outfacc_sql)
    {
        // Print an error and exit
        std::cerr << "Uh oh, someFile.txt could not be opened for writing!\n";
        return "error";
    }

// We'll write two lines into this file
//outfacc_sql << " \" " << _userName << " \" " << "\n";
//outfacc_sql << " \" " << _passW0rd << " \" " << "\n";

return "";

// When outfacc_sql goes out of scope, the ofstream
// destructor will close the file
}

*/
