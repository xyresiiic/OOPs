#include <iostream>
using namespace std;

class signup {
public:
    string Username;
    string Password;
    string user; 
    string pass; 
    string suser;
    string spass;
    int option;
};


signup s1;

void signup() {
    cout << "Enter username: ";
    cin >> s1.user;
    cout << "Enter password: ";
    cin >> s1.pass;

    if (s1.user == s1.Username && s1.pass == s1.Password) {
        cout << "Welcome, " << s1.Username << endl;
    } else {
        cout << "Access denied. Invalid Inputs." << endl;
    }
}

void login() {

    cout << "Enter username: ";
    cin >> s1.suser;

    cout << "Enter password: ";
    cin >> s1.spass;
       
}

int main() {
    

    cout << "Enter username: ";
    cin >> s1.Username;

    cout << "Enter password: ";
    cin >> s1.Password;

    cout << "Signup successful! " << s1.Username << endl;

    cout << "1.Press 1 for login"<<endl;
    cout << "2.Press 2 for signup"<<endl;
    cin >> s1.option;

    if (s1.option == 1) {
        signup();
        
    } else if (s1.option == 2){
       login();
    }
    else{
    	cout << "Invaid input";
    	
	}  
}

