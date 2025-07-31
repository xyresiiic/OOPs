#include<iostream>
using namespace std;
class hello{
		public:
			int a=10;
			int b=20;
			void swap()
			{
			int c;
			c=a;
			a=b;
			b=c;
			cout<<a<<endl;
			cout<<b<<endl;
		}
	};
	class hello2{
		public:
			int user2;
			void hi2()
			{
				int f=1;
				int i;
				for(i=1;i<=user2;i++)
				{
					f=f*i;
				}
				cout<<f<<endl;
			}
	};
	
	
	int main()
	{
		hello h1;
		hello h2;
	cout<<h1.a<<endl;
	cout<<h1.b<<endl;
	h1.swap();
	cout<<"enter no. for factorial"<<endl;
	cin>>h2.f;
	h1.hi2;
	}
	
