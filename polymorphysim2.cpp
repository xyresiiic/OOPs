#include<iostream>
using namespace std;
class hello{
	public:
		int hi(int a, int b)
		{
		    return a+b;	
		}
		
		double hi(double c, double d)
		{
		    return c+d;
		}
};

int main()
{
	hello s1;
	cout<<s1.hi(10,20)<<endl;;
    cout<<s1.hi(10.20,60.20)<<endl;
	}
