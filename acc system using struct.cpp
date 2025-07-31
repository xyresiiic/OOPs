#include<iostream>
using namespace std;

struct user1 {
    string a = "ramesh"; 
    int b = 5656; 
    string c = "6378897327";
    int d = 4545;
    string e; 
    int f; 
};

int main()
{
    user1 s1;

    cout << "Enter your account number: ";
    cin >> s1.e;

    if (s1.e == s1.c)
    {
        cout << "Enter your PIN: ";
        cin >> s1.f;

        if (s1.f == s1.b)
        {
            cout << "Welcome " << s1.a << endl;
            cout << "Your currect balance is: " << s1.d << endl;
        }
        else {
            cout << "Wrong PIN, try again." << endl;
        }
    }
    else
    {
        cout << "Wrong input, try again." << endl;
    }

    return 0;
}

