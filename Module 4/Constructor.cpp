#include<iostream>
using namespace std;

class Add
{	
	public:
	Add (int a, int b)
	{
		cout<<"Addition of two Number is :  "<<a+b<<endl;
	}
};

class Sub
{	
	public:
	Sub (int a, int b)
	{
		cout<<"Subtraction of two Number is :  "<<a-b<<endl;
	}
};

class Mul
{	
	public:
	Mul (int a, int b)
	{
		cout<<"Multiplication of two Number is :  "<<a*b<<endl;
	}
};

class Div
{
	public:
	Div (int a, int b)
	{	
		cout<<"Division of two Number is :  "<<a/b<<endl;
	}
};
int main()
{
	Add a(5,5);
	Sub s(15,5);
	Mul m(2,3);
	Div d(10,2);
	return 0;
}
