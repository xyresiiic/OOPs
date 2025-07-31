#include<iostream>
using namespace std;

class fab {
    public:
        int user1;
        void hi() {
            int a = 0;
            int b = 1;
            int c, i;

            cout << a << endl;
            if (user1 > 1)
                cout << b << endl;

            for(i = 2; i < user1; i++) {
                c = a + b;
                cout << c << endl;
                a = b;
                b = c;
            }
        }
};

class table {
    public:
        int user2;
        void hi2() {
            for(int i = 1; i <= 10; i++) {
                cout << user2 << " * " << i << " = " << user2 * i << endl;
            }
        }
};

int main() {
    fab s1;
    table s2;

    cout << "Enter the value for printing Fibonacci series: ";
    cin >> s1.user1;

    cout << "Enter the value for printing table:";
    cin >> s2.user2;

    cout << "Here is your fibonacci Series:"<<endl;
    s1.hi();

    cout << "Here is your multiplication Table:"<<endl;
    s2.hi2();

    return 0;
}

