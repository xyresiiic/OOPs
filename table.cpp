#include<iostream>
using namespace std;
class hello{
	public:
		int user;
		void hi()
		{
			int i;
			for(int i = 1; i <= 10; i++)
			{
				cout<<user<<"*"<<i<<"="<<user*i<<endl;
			}
		}
};
int main()
{
	hello s1;
	cout<<"enter the number to get table"<<endl;
	cin>>s1.user;
	s1.hi();
}
