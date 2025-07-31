#include<iostream>
using namespace std;
class hello{
	public:
	int i;
	int arr[5];
	
};
int main()
{
	hello s1;
	cout<<"enter no. to insert"<<endl;
	for(s1.i=0;s1.i<5;s1.i++)
	{
		cin>>s1.arr[s1.i];
	}
	
	for(s1.i=0;s1.i<5;s1.i++){
		cout<<endl;
		cout<<s1.arr[s1.i]<<endl;
	}

}
