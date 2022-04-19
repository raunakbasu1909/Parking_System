//Parking System

#include<iostream>
using namespace std;
int b1=0,b2=0;

//In Parking
void InPark()
{
	int sw;
	do
	{
		cout<<"\n\tVehicle Type\n1. Four Wheeler\n2. Two Wheeler\nEnter your choice - ";
		cin>>sw;
		switch(sw)
		{
			case 1: if(b1>=10)
			        cout<<"\nParking Full!!!!!";
			        else
			        {
			        	b1++;
			        	cout<<"\nPark your vehicle in Bay 1 in position "<<b1;
					}
					break;
			case 2: if(b2>=10)
			        cout<<"\nParking Full!!!!!!";
					else
					{
						b2++;
						cout<<"\nPark your vehicle in Bay 2 in position "<<b2;
					}		
					break;
			default: cout<<"\nInvalid input";        
		}
	}while(sw>2);
}

//Parking Exit
void OutPark()
{
	int sw;
	do
	{
		cout<<"\n\tVehicle Type\n1. Four Wheeler\n2. Two Wheeler\nEnter your choice - ";
		cin>>sw;
		switch(sw)
		{
			case 1: if(b1==0)
			          cout<<"\nInvalid Input!!!";
			        else
					{
						b1--;
						cout<<"\nExit the parking bay safely through the exit!!!";
					}  
					break;
			case 2: if(b2==0)
			          cout<<"\nInvalid Input!!!";
			        else
					{
						b2--;
						cout<<"\nExit the parking bay safely through the exit!!!";
					}  
					break;
			default: cout<<"\nInvalid Input!!!!!!";		
		}
	}while(sw>2);
}

int main()
{
	int sw;
	char c;
	do
	{
		cout<<"\t\tWelcome to Mall Parking-Site\n\n";
	    cout<<"1. Going inside parking zone\n2. Exiting the parking zone\n3. Exit\nEnter your choice - ";
	    cin>>sw;
	    switch(sw)
	    {
	    	case 1: InPark();
	    	        cout<<"\n\nThank you for choosing Mall Parking-Site!!!!!!!";
	    	        break;
	    	case 2: OutPark();
			        cout<<"\n\nThank you for choosing Mall Parking-Site. Hope you enjoyed the service!!!!!!!";
			case 3: exit(0);
			default: cout<<"\n\nInvalid Input!!!!!!";		        
		}
		cout<<"\n\nDo you want to coninue with the site (y/n) - ";
		cin>>c;
	}while(c=='y'||c=='Y');
	return 0;
}