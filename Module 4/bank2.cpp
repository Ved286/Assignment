#include<iostream>
using namespace std;
int main()
{
	return 0;
}
#include<iostream>
#include<string>
using namespace std;

class Bank
{
	private:
		
		float balance;
		
	public:
		
		string name;
		float ac_no;
		int type;
		//1.current  2. Saving.
		
		void values()
		{
			cout<<endl<<"Enter The Name of acc holder : ";
			cin>>name;
			cout<<endl<<"Enter Your Balance : ";
			cin>>balance;
			cout<<endl<<"Enter The type of acc 1 for current and 2 for saving : ";
			cin>>type;
			
		}
		
		void deposit()
		{
			float amt;
			cout<<endl<<"Enter the to deposit:"<<endl;	
			cin>>amt;
			
			balance+=amt;
		}
		
		void Widthraw()
		{
			float amt;
				cout<<"Enter the Amount to withdraw:";
				cin>>amt;
				if(amt<=balance)
				{
					balance-=amt;
					cout<<amt<<" is Debited From your Account The New Balance is :RS "<<balance<<endl;	
				}
				else
					cout<<"Insufficient Balance in Your Account.....!"<<endl;
		}
		void View_Balance()
		{	
			int c;
			
			cout<<"Your balance is:"<<balance<<endl;
			
		x:	cout<<"press 1.to withdraw 2. Continue";
			cin>>c;
			if(c==1)
			{
				Widthraw();
			}
			else if(c==2)
			{
				
			}
			else
			{
				cout<< "Wrong Input"<<endl;
				goto x;
			}
		}
		void Display()
		{
			cout<<"Name of acc Holder"<<name<<endl;
			cout<<"Your Balance"<<balance<<endl;
		}
				
};

int main()
{
	int c=0;
	Bank obj;		
	
	while(c!=6)
	{
		cout<<"1.To Asssign Values\n2.To deposit money\n3.View Balance \n4.Withdraw Money\n5.To View name and balance\n6.Exit\n";
		cout<<"Enter Your Choice:";
		cin>>c;
		if(c==1)
			obj.values();		
		else if(c==2)
			obj.deposit();
		else if(c==3)
			obj.View_Balance();
		else if(c==4)
			obj.Widthraw();
		else if(c==5)
			obj.Display();
		else if(c==6)
			cout<<"Thank You.............!";
		else
		cout<<"Invalid Choice..............!\n";
	}
	return 0;
}
