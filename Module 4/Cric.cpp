#include<iostream>
using namespace std;

class Cricket
{
	public :
		int n;
		int runs[20],i,top=0,sum=0;
		string name;
		float avg;
		
		
		void run()
		{
		
			for(i=0;i<n;i++)
			{
				cout<<"Enter run of Inning"<<i+1<<": ";
				cin>>runs[i];
				
				sum += runs[i];
				
				if(runs[i] >= top)
				{
					top = runs[i];
				}
			}
		
		}
				
		
		
};

class Batsman : public Cricket
{
	public :
		void data()
		{
			cout<<"Enter Cricketer Name : ";
			cin>>name;
			cout<<"Enter total no of innings player had Played:";
			cin>>n;
		}
		

		void Average()
		{
			avg = sum / n;
		}
		
		void display()
		{
			cout<<"Name Of Batsman is : "<<name<<endl;
			cout<<"Tota run of "<<name<<" is "<<sum<<endl;
			cout<<"Best Performance : "<<top<<endl;
			cout<<"Average Run is "<<avg;
		}
};

int main()
{
	Batsman b;
	b.data();
	b.run();
	b.Average();
	b.display();
	
	return 0;
}