#include<iostream>
using namespace std;
int main()
{
	int a;
    int& b=a;
    int& c=a;
    int& d=a;

	cout<<"enter value of A"<<endl;
	cin>>a;
	cout<<"enter value of B"<<endl;
	cin>>b;
	cout<<"enter value of C"<<endl;
	cin>>c;
	cout<<"enter value of D"<<endl;
	cin>>d;
	
	cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
}
