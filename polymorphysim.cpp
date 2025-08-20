#include<iostream>
using namespace std;
class hello{
	public:
		void hi()
		{
		cout<<"this is firtst parra"<<endl;	
		}
};

class hello2{
	public:
		void hi()
		{
		cout<<"this is second parra"<<endl;
		}
};


int main()
{
	hello s1;
	hello2 s2;
	s1.hi();
	s2.hi();}
