#include<iostream>
using namespace std;
class hello{
	public:
		int a;
		int b;
		string c;
		string d;
};
int main()
{
	hello s1;
	cout<<"enter 1st value"<<endl;
    cin>>s1.a;
    cout<<"enter 2nd value"<<endl;
    cin>>s1.b;
    cout<<"enter 2nd string"<<endl<<endl;
    cin>>s1.c;
    cout<<"enter 2nd string"<<endl<<endl;
    cin>>s1.d;
    cout<<s1.a+s1.b<<endl<<s1.c<<" "<<s1.d;
}
