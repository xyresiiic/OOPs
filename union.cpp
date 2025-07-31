#include<iostream>
using namespace std;

union hello{
	int a;
	int b;
	double c;
};
int main ()
{

	union hello s1;
	s1.a=10;
	s1.b=20;
	s1.c=30;
	cout<<s1.a<<endl;
	cout<<s1.b<<endl;
	cout<<s1.c<<endl;
}
