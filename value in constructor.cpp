#include<iostream>
using namespace std;
class hello{
	public:
		hello(int a , int b)
		{
			cout<<"enter value of a and b"<<endl;
			cin>>a>>b;
			cout<<"this is a default constructor"<<a+b<<endl;
		}
};

int main()
{
   hello s1(0,0);				
}
