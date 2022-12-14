#include<iostream>
using namespace std;

class Add
{
	public:
	int a[10];
	void data()
	{
		int i;
		for(i=0;i<10;i++)
		cin>>a[i];
	}	
	
	Add operator +(Add b)
	{
		Add s;
		int i;
		
		for(i=0;i<10;i++)
			s.a[i]=a[i]+b.a[i];
			
		return s;
	}
	void display()
	{
		int i;
		cout<<"Added matrix is :"<<endl;;
		for(i=-0;i<10;i++)
			cout<<a[i]<<" ";
	}
};

int main()
{
	Add obj1,obj2,obj3;
	cout<<"Enter value of Matrix1 :"<<endl;
	obj1.data();
	
	cout<<"Enter value of Matrix2 :"<<endl;
	obj2.data();
	
	obj3= obj1 + obj2;
	
	obj3.display();
	
	return 0;
}
/*
1
2
3
4
5
6
7
8
9
10
*/