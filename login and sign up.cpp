#include <iostream>
using namespace std;

class signup {
public:
    string Username;
    string Password;
    string suser; 
    string spass; 
    string luser;
    string lpass;
    int option;
};

signup s1; 

void doSignup() {
    cout << "Enter username: ";
    cin >> s1.suser;

    cout << "Enter password: ";
    cin >> s1.spass;

    if (s1.suser == s1.Username && s1.spass == s1.Password) {
        cout << "Welcome, " << s1.Username << endl;
    } else {
        cout << "Access denied. Invalid Inputs." << endl;
    }
}

void login() {
    cout << "Enter username: ";
    cin >> s1.luser;

    cout << "Enter password: ";
    cin >> s1.lpass;

    if (s1.luser == s1.Username && s1.lpass == s1.Password) {
        cout << "Login successful! Welcome back, " << s1.Username << "!" << endl;
    } else {
        cout << "Login failed. Invalid username or password." << endl;
    }
}

int main() {
	cout << "Welcome! to signUp page"<<endl;
    cout << "Enter username: ";
    cin >> s1.Username;

    cout << "Enter password: ";
    cin >> s1.Password;

    cout << "Signup successful! " << s1.Username << endl;

    cout << "1. Press 1 for login" << endl;
    cout << "2. Press 2 for signup" << endl;
    cin >> s1.option;

    if (s1.option == 1) {
        login();
    } else if (s1.option == 2) {
        doSignup();
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
