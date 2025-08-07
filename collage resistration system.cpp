#include<iostream>
using namespace std;
class hello{
	
    public:
		string name;
		string per;
		string dept;
		string PhoneNo;
		string state;
		string city;
		void admin()
		{
			cout<<"<------------------------------------->"<<endl;
			cout<<"          Admin Department             "<<endl;
			cout<<"<------------------------------------->"<<endl<<endl;
			cout<<"STUDENT NAME    :- "<<name<<endl;
			cout<<"12TH PERSENTAGE :- "<<per<<endl;
			cout<<"DEPARTMENT      :- "<<dept<<endl;
			cout<<"PHONE NUMBER    :- "<<PhoneNo<<endl;
			cout<<"STATE           :- "<<state<<endl;
			cout<<"CITY            :- "<<city<<endl;
		}
		
		void hod()
		{
			cout<<"<------------------------------------->"<<endl;
			cout<<"           HOD Department              "<<endl;
			cout<<"<------------------------------------->"<<endl<<endl;
			cout<<"STUDENT NAME    :- "<<name<<endl;
			cout<<"12TH PERSENTAGE :- "<<per<<endl;
			cout<<"DEPARTMENT      :- "<<dept<<endl;
			cout<<"PHONE NUMBER    :- "<<PhoneNo<<endl;
			
		}
		
		void accounts()
		{
			cout<<"<------------------------------------->"<<endl;
			cout<<"          Accounts Department          "<<endl;
			cout<<"<------------------------------------->"<<endl<<endl;
			cout<<"STUDENT NAME    :- "<<name<<endl;
			cout<<"DEPARTMENT      :- "<<dept<<endl;
		}
		
		void food()
		{
			cout<<"<------------------------------------->"<<endl;
			cout<<"            Food Department            "<<endl;
			cout<<"<------------------------------------->"<<endl<<endl;
			cout<<"STUDENT NAME    :- "<<name<<endl;
			cout<<"CITY            :- "<<city<<endl;
		}
		
		
};

int main()
{
	hello s1;
	cout<<"WELCOME IN ARYA COLLAGE OF ENGINEERING"<<endl;
	cout<<"         ENTER STUDENT DETAILS         "<<endl;
	cout<<"<------------------------------------->"<<endl<<endl;
	cout<<"Enter your full name: ";
	cin>>s1.name;
	cout<<"Enter your 12th per: ";
	cin>>s1.per;
	cout<<"Enter your Department: ";
	cin>>s1.dept;
	cout<<"Enter your Phone Number: ";
	cin>>s1.PhoneNo;
	cout<<"Enter state: ";
	cin>>s1.state;
	cout<<"Enter your city: ";
	cin>>s1.city;
	cout<<endl;
	cout<<"<------------------------------------->"<<endl;
	cout<<"               THANK YOU               "<<endl;
	cout<<"        YOUR DATA HAS BEEN SAVED       "<<endl;
	cout<<"<------------------------------------->"<<endl<<endl<<endl;
	cout<<"          DEPARTMENT SECTION           "<<endl;
	cout<<"      <------------------------->      "<<endl<<endl;
	
	string username;
	string password;
	
	cout<<"Enter your username:";
	cin>>username;
	cout<<"Enter your password:";
	cin>>password;
	cout<<endl;
	
	if(username == "ADMIN@1" && password=="ADMIN")
	{
		s1.admin();
	}
	else if(username=="HOD@1" && password=="HOD")
	{
		s1.hod();
	}
		else if(username=="ACCOUNTS@1" && password=="ACCOUNTS")
	{
		s1.accounts();
	}
	else if (username=="FOOD@1" &&  password==  "FOOD" )
	{
		s1.food();
	}
	else
	{
	cout<<"no data found"<<endl;
	}
	
	
}
