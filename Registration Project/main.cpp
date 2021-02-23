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
//  Input Registration Function
//==========================================================
int promptRegistration(registrationDatabase registration)
{
    // Initialize ID
    registration.accountID = 0;
    
    // Prompt Username & Password
    cout << "When prompted please enter a username and password" << endl;
    cout << "Username: ";
    cin >> registration.username;
    cout << "Password: ";
    cin >> registration.password;
    cout << endl;
    
    return registration.accountID + 1;
}

//==========================================================
//  Read Registration Function
//==========================================================
void regInfo(registrationDatabase registration)
{
    
}

//==========================================================
//  Output to File
//==========================================================
void outputFile(ofstream& outFile, registrationDatabase registration)
{
    
}

//==========================================================
//  Main
//==========================================================
int main()
{

    // Declare variables
    registrationDatabase registration;
    ofstream outFile;

    // Show application header
    cout << "Welcome to Registration!" << endl;
    cout << "------------------------" << endl << endl;
    
    promptRegistration(registration);

    // Show application close
    cout << "\nEnd of my Application" << endl;

}


