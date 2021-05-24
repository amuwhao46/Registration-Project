//==========================================================
//
// Title:       Registration page
// Author:      Oke Amuwha
// Date:        2/21/21
// Description:
//   User can register a username and password, then
//  log in, if attempt is unsuccessful it will prompt
//  them again. A file is also created (potentially
//  encrypted).
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <cmath> // For math
using namespace std; // So "std::cout" may be abbreviated to "cout"

//==========================================================
//  GLOBAL
//==========================================================
const string FILE_NAME = "RegistrationData.dat";
const int COL1 = 10;
const int COL2 = 10;
const int COL3 = 3;

//==========================================================
//  Struct
//==========================================================
struct registrationDatabase
{
    
    string username;
    string password;
    int accountID;
    
};

//==========================================================
//  Menu
//==========================================================
int menuOption()
{
    
    int option;
    
    cout << endl;
    cout << "Register an account or Log into an existing account" << endl;
    cout << "1 - Register" << endl;
    cout << "2 - Log in" << endl;
    cout << "9 - Exit" << endl;
    cin >> option;
    cout << endl;
    
    return option;
    
}

//==========================================================
//  Input Registration
//==========================================================
void promptRegistration(registrationDatabase registration)
{
    
    // Prompt Username & Password
    cout << "When prompted please enter a username and password" << endl;
    cout << "Username: ";
    cin >> registration.username;
    cout << "Password: ";
    cin >> registration.password;
    cout << endl;
    
}

//==========================================================
//  Input Log in
//==========================================================
void promptLogIn(registrationDatabase registration)
{
    
    // Prompt Username & Password
    cout << "When prompted please enter your username and password" << endl;
    cout << "Username: ";
    cin >> registration.username;
    cout << "Password: ";
    cin >> registration.password;
    cout << endl;
    
}

//==========================================================
//  Encrypt Password
//==========================================================
void encryptPassword(registrationDatabase registration)
{
    
}

//==========================================================
//  Output to File
//==========================================================
void outputFile(ofstream& outFile, registrationDatabase registration)
{
    
    outFile << setw(COL1) << left << "Username"
    << setw(COL2) << left << "Password"
    << setw(COL3) << left << "ID";
    
    while(outFile)
    {
        outFile << registration.username
        << registration.password
        << registration.accountID;
    }
    
}

//==========================================================
//  Main
//==========================================================
int main()
{

    // Declare variables
    registrationDatabase registration;
    ofstream outFile;
    int menu;

    // Show application header
    cout << "Welcome to Registration and Log-in!" << endl;
    cout << "-----------------------------------" << endl << endl;
    
    // Call functions
    menu = menuOption();
    while (menu != 9)
    {
        if (menu == 1)
            promptRegistration(registration);
        else
            promptLogIn(registration);
        
        menu = menuOption();
    }


    // Show application close
    cout << "\nEnd of my Application" << endl;

}


