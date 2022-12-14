#include<iostream>
using namespace std;

class String
{
	public:
		string a;
		
		void value(string x)
		{
			a=x;
		}	
		
		String operator +(String obj1)
		{
			String obj2;
			obj2.a = a + obj1.a;
			return obj2;
			
		}
		void display()
		{
			cout<<a<<endl;
		}
};

int main()
{
	String s1,s2,s3;
	s1.value("abc");
	s2.value("DEF");
	s3=s1+s2;
	s3.display();
	return 0;
}
