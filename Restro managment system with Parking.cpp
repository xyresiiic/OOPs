#include<iostream>
using namespace std;

class restaurant
{
   public:
      int option;
      int suboption;
      string customerName;
      string customerPhone;
      float totalBill;
      int carSlots;
      int bikeSlots;
      string cars[5];9
      string bikes[10];
};

restaurant s1;
void menu()
{
   do {
      cout<<endl<<"<------------------ FOOD MENU ------------------->"<<endl<<endl;
      cout<<"1.Veg Items"<<endl;
      cout<<"2.Veg Combos"<<endl;
      cout<<"3.Non-Veg Items"<<endl;
      cout<<"4.Non-Veg Combos"<<endl;
      cout<<"5.Back"<<endl<<endl;
      
      cout<<"Enter your option--> ";
      cin>>s1.suboption;

      if(s1.suboption==1)
      {
         int c;
         do {
            cout<<endl<<"<------------------ Veg Items ------------------->"<<endl<<endl;
            cout<<"1.Paneer Butter Masala - Rs.250"<<endl;
            cout<<"2.Veg Biryani - Rs.180"<<endl;
            cout<<"3.Dal Tadka - Rs.120"<<endl;
            cout<<"4.Back"<<endl;
            cout<<"Enter choice--> ";
            cin>>c;

            if(c==1)
			{ s1.totalBill+=250;
			cout<<"Added Paneer Butter Masala"<<endl;
			}
			
            else if(c==2)
			{
			 s1.totalBill+=180; 
			 cout<<"Added Veg Biryani"<<endl;
			}
			
            else if(c==3)
			{
			 s1.totalBill+=120;
			 cout<<"Added Dal Tadka"<<endl;
			 }
			 
            else if(c==4)
			{
			cout<<"Returning..."<<endl;
			}
			
            else 
			{
			cout<<"Invalid Input"<<endl;
		    }

         } while(c!=4);
      }

      else if(s1.suboption==2)
      {
         int c;
         do {
            cout<<endl<<"<------------------ Veg Combos ------------------->"<<endl<<endl;
            cout<<"1.Lunch Combo - Rs.400"<<endl;
            cout<<"2.Dinner Combo - Rs.350"<<endl;
            cout<<"3.Back"<<endl;
            cout<<"Enter choice--> ";
            cin>>c;

            if(c==1)
			{
			 s1.totalBill+=400;
			 cout<<"Added Lunch Combo"<<endl;
			}
            else if(c==2)
			{
			 s1.totalBill+=350;
			 cout<<"Added Dinner Combo"<<endl;
			}
            else if(c==3) 
			{
			 cout<<"Returning..."<<endl;
		    }

            else 
			{
			cout<<"Invalid Input"<<endl;
		    }

         } while(c!=3);
      }

      else if(s1.suboption==3)
      {
         int c;
         do {
            cout<<endl<<"<------------------ Non-Veg Items ------------------->"<<endl<<endl;
            cout<<"1.Chicken Curry - Rs.300"<<endl;
            cout<<"2.Mutton Biryani - Rs.350"<<endl;
            cout<<"3.Fish Fry - Rs.280"<<endl;
            cout<<"4.Back"<<endl;
            cout<<"Enter choice--> ";
            cin>>c;

            if(c==1)
			{
			 s1.totalBill+=300;
			 cout<<"Added Chicken Curry"<<endl;
			 }
			 
            else if(c==2)
			{
			 s1.totalBill+=350;
			 cout<<"Added Mutton Biryani"<<endl;
			 }
			 
            else if(c==3)
			{
			s1.totalBill+=280;
			cout<<"Added Fish Fry"<<endl;
			}
			
            
			 else if(c==4)
			 {
			 cout<<"Returning..."<<endl;
		    }
             else 
			 {
			 cout<<"Invalid Input"<<endl;
		     }

         } while(c!=4);
      }

      else if(s1.suboption==4)
      {
         int c;
         do {
            cout<<endl<<"<------------------ Non-Veg Combos ------------------->"<<endl<<endl;
            cout<<"1.Chicken Thali Combo - Rs.500"<<endl;
            cout<<"2.Family Combo - Rs.750"<<endl;
            cout<<"3.Back"<<endl;
            cout<<"Enter choice--> ";
            cin>>c;

            if(c==1)
			{
			 s1.totalBill+=500;
			cout<<"Added Chicken Thali Combo"<<endl;
			}
			
            else if(c==2)
			{
			 s1.totalBill+=750;
			 cout<<"Added Family Combo"<<endl;
			}
			
            else if(c==3)
			{
			cout<<"Returning..."<<endl;
		    }
		    
            else 
			{
			cout<<"Invalid Input"<<endl;
	     	}

         } while(c!=3);
      }

      else if(s1.suboption==5)
      {
         cout<<"Exiting Food Menu..."<<endl;
      }

      else
      {
         cout<<"Invalid input!!!"<<endl;
      }
   } while(s1.suboption!=5);
}


void services()
{
   cout<<"<------------------ SERVICES ------------------->"<<endl<<endl;
   cout<<"1.Birthday Party"<<endl;
   cout<<"2.DJ Arrangements"<<endl;
   cout<<"3.Catering"<<endl;
   cout<<"4.Exit"<<endl<<endl;

   cout<<"Enter your option--> ";
   cin>>s1.suboption;

   if(s1.suboption==1)
   {
   	  cout<<"<------------------ Birthday Party Options ------------------->"<<endl<<endl;
      cout<<"1. 5 People - Rs.2000"<<endl;
      cout<<"2. 10 People - Rs.3500"<<endl;
      cout<<"3. 15 People - Rs.5000"<<endl;
      
      int c;
      cout<<"Enter choice--> ";
      cin>>c;
    
      if(c==1)
	  {
	  s1.totalBill+=2000;
	  cout<<"Birthday Party for 5 booked"<<endl;
	  }
	  
      else if(c==2)
	  {
	  s1.totalBill+=3500;
	  cout<<"Birthday Party for 10 booked"<<endl;
	  }
	  
      else if(c==3)
	  {
	  s1.totalBill+=5000;
	  cout<<"Birthday Party for 15 booked"<<endl;
	  }
	  
      else cout<<"Invalid Input !"<<endl; 
      
   }
   
   
   else if(s1.suboption==2)
   {
   	  cout<<"<------------------ DJ Options ------------------->"<<endl<<endl;
      cout<<"1.Budget - Rs.3000"<<endl;
      cout<<"2.Regular - Rs.5000"<<endl;
      cout<<"3.Premium - Rs.8000"<<endl;
      
      int c;
      cout<<"Enter choice--> ";
      cin>>c;
      
      if(c==1)
	  {
	  s1.totalBill+=3000;
	  cout<<"Budget DJ booked"<<endl;
	  }
	  
      else if(c==2)
	  {
	  s1.totalBill+=5000;
	  cout<<"Regular DJ booked"<<endl;
	  }
	  
      else if(c==3)
	  { s1.totalBill+=8000;
	  cout<<"Premium DJ booked"<<endl;
	  }
	  
      else cout<<"Invalid!"<<endl;
   }
   
   
   else if(s1.suboption==3)
   {
   	  cout<<"<------------------ Catering Options ------------------->"<<endl<<endl;
      cout<<"1.50 People - Rs.10000"<<endl;
      cout<<"2.100 People - Rs.18000"<<endl;
      cout<<"3.150 People - Rs.25000"<<endl;
      
      int c;
      cout<<"Enter choice--> ";
      cin>>c;
      
      if(c==1)
	  {
	  s1.totalBill+=10000;
	  cout<<"Catering for 50 booked"<<endl;
	  }
	  
      else if(c==2)
	  {
	  s1.totalBill+=18000;
	  cout<<"Catering for 100 booked"<<endl;
	  }
	  
      else if(c==3)
	  {
	  s1.totalBill+=25000;
	  cout<<"Catering for 150 booked"<<endl;
	  }
	  
      else cout<<"Invalid Option"<<endl;
   }
   
   
   else if(s1.suboption==4)
   {
      cout<<"Exiting Services..."<<endl;
   }
   
   else
   {
      cout<<"Invalid input!!!"<<endl;
   }
   
}


void parkVehicle()
{
   cout<<"<------------------ PARK VEHICLE ------------------->"<<endl<<endl;
   cout<<"1.Car (Rs.50)"<<endl;
   cout<<"2.Bike (Rs.20)"<<endl;
   
   string number;
   int c;
   cout<<"Enter choice--> ";
   cin>>c;

   if(c==1)
   {
      if(s1.carSlots>0)
      {
         cout<<"Enter Car Number: ";
         cin>>number;
         
         for(int i=0;i<5;i++)
         {
            if(s1.cars[i]=="")
			{
			 s1.cars[i]=number;
			 break;
			}
			
         }
         
         s1.carSlots--;
         s1.totalBill+=50;
         cout<<"Car parked. Remaining slots--> "<<s1.carSlots<<endl;
         
      }
      else cout<<"No car slots available!"<<endl;
      
   }
   
   
   else if(c==2)
   {
      if(s1.bikeSlots>0)
      {
         cout<<"Enter Bike Number: ";
         cin>>number;
         
         for(int i=0;i<10;i++)
         {
            if(s1.bikes[i]=="")
			{ 
			 s1.bikes[i]=number; 
			 break; 
			}
         }
         
         s1.bikeSlots--;
         s1.totalBill+=20;
         cout<<"Bike parked. Remaining slots--> "<<s1.bikeSlots<<endl;
         
      }
      else cout<<"No bike slots available!"<<endl;
      
   }
   else cout<<"Invalid input!"<<endl;
   
}


void removeVehicle()
{
   cout<<"<------------------ REMOVE VEHICLE ------------------->"<<endl<<endl;
   cout<<"1.Car"<<endl;
   cout<<"2.Bike"<<endl;
  
   string number;
   int c;
   cout<<"Enter choice--> ";
   cin>>c;

   if(c==1)
   {
      cout<<"Enter Car Number to remove: ";
      cin>>number;
      
      for(int i=0;i<5;i++)
      {
         if(s1.cars[i]==number)
		 { 
		  s1.cars[i]="";
		  s1.carSlots++;
		  cout<<"Car removed."<<endl;
		  return;
		  }
      }
      
      cout<<"Car not found!"<<endl;
   }
   
   else if(c==2)
   {
      cout<<"Enter Bike Number to remove: ";
      cin>>number;
      
      for(int i=0;i<10;i++)
      {
         if(s1.bikes[i]==number)
		 { s1.bikes[i]="";
		 s1.bikeSlots++;
		 cout<<"Bike removed."<<endl;
		 return;
		 }
      }
      
      cout<<"Bike not found!"<<endl;
   }
   else cout<<"Invalid input!"<<endl;
}


void generateBill()
{
   cout<<"<------------------ FINAL BILL ------------------->"<<endl<<endl;
   cout<<"Customer Name: "<<s1.customerName<<endl;
   cout<<"Phone Number: "<<s1.customerPhone<<endl;
   cout<<"Total Bill: Rs."<<s1.totalBill<<endl;
}


int main()
{
   s1.totalBill=0;
   s1.carSlots=5;
   s1.bikeSlots=10;
   for(int i=0;i<5;i++) s1.cars[i]="";
   for(int i=0;i<10;i++) s1.bikes[i]="";

   cout<<"Enter Customer Name: ";
   cin.ignore();
   getline(cin,s1.customerName);
   cout<<"Enter Phone Number: ";
   getline(cin,s1.customerPhone);

   do{
      cout<<endl<<"<------ RESTAURANT MANAGEMENT SYSTEM ------>"<<endl<<endl;
      cout<<"1.Food Menu"<<endl;
      cout<<"2.Services"<<endl;
      cout<<"3.Park Vehicle"<<endl;
      cout<<"4.Remove Vehicle"<<endl;
      //cout<<"5.Parking Status"<<endl;
      cout<<"6.Generate Bill"<<endl;
      cout<<"7.Exit"<<endl<<endl;
      
      cout<<"Enter your option--> ";
      cin>>s1.option;

      if(s1.option==1) 
	  {
	   menu();
      }
      
      else if(s1.option==2) 
	  {
	  services();
	  }
	  
      else if(s1.option==3)
	  {
	   parkVehicle();
	  }
	  
      else if(s1.option==4)
	  {
	   removeVehicle();
	  }
	  
      //else if(s1.option==5) parkingStatus();
      
      else if(s1.option==6)
	  {
	   generateBill();
	  }
	  
      else if(s1.option==7)
	  {
	   cout<<"Thank you! Visit again."<<endl;
      }
      
      else 
	  {
	   cout<<"Invalid input!!!"<<endl;
      }

   }while(s1.option!=7);

   return 0;
}

