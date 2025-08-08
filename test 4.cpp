#include<iostream>
using namespace std;
int main()
{
	int arr[]={0,2,4,6,7,5,3};
	int n,result=0;
	for(n=0;n<8;n++)
	{
		result+=arr[n];
	}
	cout<<result<<endl;
}
