#include<iostream>
using namespace std;
int main()
{
	int arr[3];
	
		for(int i=0; i<=3; i++)
	{
		cout<<"enter the value"<<endl;
		cin>>arr[i];
	}
	for(int i=0; i<=3; i++)
	{
		cout<<arr[i]<<endl;
	}
	delete[] arr;
		for(int i=0; i<=3; i++)
	{
		cout<<arr[i]<<endl;
	}
	for(int i=0; i<=3; i++)
	{
		cout<<arr[i]<<endl;
	}
}
