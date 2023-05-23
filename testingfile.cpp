#include <iostream>
#include <string>

using namespace std;

// Sign in screen
// Type of car
// When
// Showcase availability

// Fuction Prototypes
void ReturningCustomer();
void NewCustomer();
void SignIn();
bool CheckLogIn(string&, string&);
void CheckValidity(string&, string&);

int main()
{
    SignIn();
}

void SignIn()
{
    char customerType;
    bool invalid = false;

    do
    {
        cout << "Are you a new customer or returning customer? "
             << "Please enter N or n for new customer "
             << "and R or r for returning customer!" << endl;

        cin >> customerType;

        switch (customerType)
        {
        case 'N':
        case 'n':
        {
            NewCustomer();
        }
        break;
        case 'R':
        case 'r':
        {
            ReturningCustomer();
        }
        break;
        default:
        {
            invalid = true;
            cout << "Please enter a valid answer. "
                 << "Are you a new customer or returning customer? "
                 << "Please enter N or n for new customer "
                 << "and R or r for returning customer!" << endl;
        }
        }
    } while (invalid = true);
}

void NewCustomer()
{
    string username, password;

    cout << "Please enter an username or valid email ";
    cout << "Username: ";
    getline(cin, username);
    cout << "Please enter a password that meets the following requirements: "
    << "1. Be atleast 6 characters long" << endl
    << "2. Have at least 1 number" << endl;
    cout << "Password: ";
    getline(cin, password);

    CheckValidity(username, password);
    ReturningCustomer();
}

void CheckValidity(string& username, string& password)
{
    
    CheckLogIn(username, password);
    
    return;

}

void ReturningCustomer()
{
    string username, password;
    cout << "Please enter your username or email and password to login" << endl;

    cout << "Username: ";
    getline(cin, username);

    cout << "Password: ";
    getline(cin, password);

    CheckLogIn(username, password);
}

bool CheckLogIn(string& username, string& password)
{
    bool match;

    if(match = true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

