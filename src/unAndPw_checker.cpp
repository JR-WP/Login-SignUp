#include "main_header.h"

/*
This is going to check if the username and passwords are good enough.
username rules.

username:
name must be at least 8 chars and max of 16 chars
 .length
cannot contain the following special chars: * ! _

 password:
 strcpy -> char array -> switch
 pass condition
 Length: min 6 max 12
 Must have upper and lower case
 at least 1 special char

 Both the username and passwords have to have passing conditions to be successful.
*/


bool checker(std::string username, std::string password)
{
bool username_Lgth{false};
bool password_Lgth{false};

bool hasUpper{false};
bool hasLower{false};

bool noNums{true};
bool noSp_Char{false};
bool noSp_Char_pw{true};


char usernameArray[20]{};
char passwordArray[12]{};


  strcpy (usernameArray, username.c_str ());
  strcpy (passwordArray, password.c_str ());

//username check
  {

    if (username.length () >= 8 && username.length () <= 16)
      {
	username_Lgth = true;
      }
    else
      {
	//function call here
	if (username.length () > 16)
	  {
	    std :: cout << username << " is longer than 16 characters.\n";
	    goto ImFail;
	  }
	else
	  {
	    std :: cout << username << " is shorter than 16 characters.\n";
	    goto ImFail;
	  }
      }

//32-47 ascii for special chars 58-64 91-96
    for (int i = 0; i < username.length (); i++)
      {

	if (static_cast < int >(usernameArray[i]) >= 32 && static_cast < int >(usernameArray[i]) <= 47)
	  {

	    goto ImFail;

	  }
	else if (static_cast < int >(usernameArray[i]) >= 58 && static_cast < int >(usernameArray[i]) <= 64)
	  {
	    goto ImFail;
	  }
	else if (static_cast < int >(usernameArray[i]) >= 91 && static_cast < int >(usernameArray[i]) <= 96)
	  {
	    std :: cout << "username: " << "{ " << username << " }" << "contains special characters that are not allowed. \n";
	    goto ImFail;
	  }
	else
	  {
	    noSp_Char = true;
	    //std :: cerr << "Tested noSp_Char Line 77 Test. noSp_Char norm val is 1: " << noSp_Char << "\n";
	    continue;
	  }

      }

  }				//end of username check


  {				//start of password checker
    if (password.length () >= 6 && password.length () <= 12)
      {
	password_Lgth = true;
      }
    else
      {
	if (password.length () > 12)
	  {
	    std :: cout << password << " is longer than 16 characters.\n";
	    goto ImFail;
	  }
	else
	  {
	    std :: cout << password << " is shorter than 6 characters.\n";
	    goto ImFail;
	  }
      }

    for (int i = 0; i < password.length (); i++)
      {
	if (static_cast <int>(passwordArray[i]) >= 97 && static_cast <int>(passwordArray[i]) <= 122)
	  {
	    hasLower = true;
	    //std :: cerr << "Tested Lower case Line 157 Test. hasLower norm val is 0: " << hasLower << "\n";
	  }
	else if (static_cast <int>(passwordArray[i]) >= 65 && static_cast <int>(passwordArray[i]) <= 90)
	  {
	    hasUpper = true;
	    // std :: cerr << "Tested hasUpper Line 163 Test. hasUpper norm val is 0: " << hasUpper << "\n";
	  }
	else if (static_cast <int>(passwordArray[i]) >= 48
&& static_cast < int >(passwordArray[i]) <= 57)
	  {
	    noNums = false;// check value
	    //  std :: cerr << "Tested noNums Line 169 Test. noNums norm val is 1: " << noNums << "\n";
	  }
	else if (static_cast <int>(passwordArray[i]) >= 32 && static_cast <int>(passwordArray[i]) <= 47)
	  {
	    switch (static_cast <int>(passwordArray[i]))
	      {
	      case 33:// !
	      case 42:// *
	      case 95:// or if c is 'i'
		noSp_Char_pw = false;
		//std :: cerr << "Tested noSp_Char_pw Line 179 Test. noSp_Char_pw norm val is 1: " << noSp_Char_pw << "\n";
		continue;
	      default:
		std :: cout << "password: " << "{ " << password << " }" << "contains special characters that are not allowed. \n";
		goto ImFail;
	      }
	  }
	else if (static_cast <int>(passwordArray[i]) >= 58 && static_cast <int>(passwordArray[i]) <= 64)
	  {
	    switch (static_cast <int>(passwordArray[i]))
	      {
	      case 33:// !
	      case 42:// *
	      case 95:// or if c is 'i'
		noSp_Char_pw = false;
		// std :: cerr << "Tested noSp_Char_pw Line 194 Test. noSp_Char_pw norm val is 1: " << noSp_Char_pw << "\n";
		continue;
	      default:
		std :: cout << "password: " << "{ " << password << " }" << "contains special characters that are not allowed. \n";
		goto ImFail;
	      }
	  }
	else if (static_cast <int>(passwordArray[i]) >= 58 && static_cast <int>(passwordArray[i]) <= 64)
	  {
	    switch (static_cast <int>(passwordArray[i]))
	      {
	      case 33:// !
	      case 42:// *
	      case 95:// or if c is 'i'
		noSp_Char_pw = false;
		// std :: cerr << "Tested noSp_Char_pw Line 209 Test. noSp_Char_pw norm val is 1: " << noSp_Char_pw << "\n";
		continue;
	      default:
		std :: cout << "password: " << "{ " << password << " }" << "contains special characters that are not allowed. \n";
		goto ImFail;
	      }
	  }
	else if (static_cast <int>(passwordArray[i]) >= 91 && static_cast <int>(passwordArray[i]) <= 96)
	  {
	    switch (static_cast <int>(passwordArray[i]))
	      {
	      case 33:// !
	      case 42:// *
	      case 95:// or if c is 'i'
		noSp_Char_pw = false;
		// std :: cerr << "Tested noSp_Char_pw Line 224 Test. noSp_Char_pw norm val is 1: " << noSp_Char_pw << "\n";
		continue;
	      default:
		std :: cout << "password: " << "{ " << password << " }" << "contains special characters that are not allowed. \n";
		goto ImFail;
	      }
	  }
	else
	  {
	    ;// null
	  }
      }


if (hasUpper == true && hasLower == true)
    {
	//std::cerr << "1st test passed\n";
	if (noSp_Char == true && noSp_Char_pw == false)
	  {
	    //std::cerr << "2nd test passed \n";
	    if (noNums == false)
	      {
		//std::cerr << "3rd test passed \n";
		return true;
	      }
	    else
	      {
		//std::cerr << "3rd test failed\n";
		return false;
	      }

	  }
	else
	  {
	    //std::cerr << " 2nd test failed \n";
	    return false;
	  }


    }
else
    {
      //std::cerr << "1st test failed\n";
      ImFail: //Immediate Fail when a condition is met.
	return false;
    }

  }				//end of password check

}				//main bracket

