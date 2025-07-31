#include <iostream>
using namespace std;
class hello{
	public:
	string Username = "Veer";
    string Password = "5161";
};
class signup{
	public:
	string Username ;
    string Password ;
};
int main() 
{

    hello s1;
    signup s2;
    string inputUser, inputPass;

    cout << "Enter username: ";
    cin >> inputUser;

    cout << "Enter password: ";
    cin >> inputPass;


    if (inputUser== s1.Username && inputPass == s1.Password) 
	{
        cout << "Welcome, " << s1.Username << endl;
    } 
	else 
	{
        cout << "Access denied. Invalid Inputs." << endl;
    }

    return 0;
}
