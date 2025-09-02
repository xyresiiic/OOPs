#include <iostream>
using namespace std;

class hello {
public:
    int *a;
    hello(int value) 
	{
        a = new int(); 
        *a = value;      
        cout << "memory initialized with value: " << *a << endl;
    }

   
    ~hello() {
        delete a; 
        cout << "memory deleted" << endl;
    }
};

int main() {
    hello s1(10);
}

