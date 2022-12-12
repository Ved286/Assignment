#include<iostream>
using namespace std;

class Bank
{
	int pin=1234;
	float balance=50000;
	
	public:
		void View_Balance()
		{
			int p;
			cout<<"Enter the Pin:";
			cin>>p;
			if(p==pin)
				cout<<"Your balance is:"<<balance<<endl;
			else
				cout<<"Incorrect pin......!"<<endl;
		}
		
		void Widthraw()
		{
			int p;
			float amt;
			cout<<"Enter the Pin:";
			cin>>p;
			if(p==pin)
			{
				cout<<"Enter the Amount to withdraw:";
				cin>>amt;
				if(amt<=balance)
				{
					balance-=amt;
					cout<<amt<<" is Debited From your Account The New Balance is :RS "<<balance;	
				}
				else
				cout<<"Insufficient Balance in Your Account.....!";
			}
			else
				cout<<"Incorrect pin......!";
		}
		
};

int main()
{
	int c=0;
	Bank obj;
	
	while(c!=3)
	{
		cout<<"\n1.View Balance \n2.Withdraw Money\n3.Exit\n";
		cout<<"Enter Your Choice:";
		cin>>c;
		if(c==1)
			obj.View_Balance();
		else if(c==2)
			obj.Widthraw();
		else if(c==3)
			cout<<"Thank You.............!";
		else
		cout<<"Invalid Choice..............!\n";
	}
	return 0;
}
