#include<iostream>
using namespace std;
class hello{
	public:
		int id;
		string name;
		void input();
		void output();
		
	
};
void hello::input()
{
	cout<<"enter the employ id:- "<<endl;
	cin>>id;
	cout<<"enter the employ name:- "<<endl;
	cin>>name;
}
void hello::output()
{
	cout<<"this is your employee id:-"<<id<<endl;
	cout<<"this is your employee name:-"<<name<<endl;
	
}
int main()
{
	hello s1[10];
	int user;
	int i;
	cout<<"enter employ num:-"<<endl;
	cin>>user;
	for(i=1;i<=user;i++)
	{
		s1[i].input();
	}
	for(i=1;i<=user;i++)
	{
		s1[i].output();
	}
}

