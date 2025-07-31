#include<iostream>
using namespace std;
struct hello{
	int a;
	int b;
};
int main()
{
	struct hello s1;
	cout<<"enter 1st number to add"<<endl;
	cin>>s1.a;
	cout<<"enter 2nd number to add"<<endl;
	cin>>s1.b;
	cout<< "your sum is: "<<s1.a+s1.b;
}
