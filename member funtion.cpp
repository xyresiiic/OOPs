#include<iostream>
using namespace std;
class hello{
		public:
			int a=10;
			int b=20;
			void hi()
			{
				cout<<"this is a member funtion"<<endl;
			}
	};
	int main()
	{
		hello h1;
		cout<<h1.a+h1.b<<endl;
		h1.hi();
	}
	
