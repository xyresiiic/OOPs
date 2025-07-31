#include<iostream>
using namespace std;
class hello {
    public:
        int user;
        void hi() {
        	
            while (404) { 
            
                cout << "Enter your PIN: ";
                cin >> user;

                if (user == 1234) {
                    cout << "Welcome" << endl;
                    break;
                } else {
                    cout << "Wrong PIN, try again!" << endl;
                    continue; 
                }
            }
        }
};
int main()
{
	hello s1;
	s1.hi();
}
