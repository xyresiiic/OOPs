#include<iostream>
using namespace std;
class hello{
	public:
		int user;
		void hi()
		{
			if(user%2==0)
			{
				cout<<"even"<<endl;
			}
			else{
				cout<<"odd"<<endl;
			}
		}
};
int main()
{
	hello s1;
	cout<<"enter the number to check"<<endl;
	cin>>s1.user;
	s1.hi();
}
