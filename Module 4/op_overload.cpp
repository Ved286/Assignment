#include<iostream>
using namespace std;

class Fun
{
	public:
		int a;
		
		void value(int x)
		{
			a=x;
		}	
		
		Fun operator +(Fun obj1)
		{
			Fun obj2;
			obj2.a = a + obj1.a;
			return obj2;
			
		}
		Fun operator -(Fun obj1)
		{
			Fun obj2;
			obj2.a = a - obj1.a ;
			return obj2;
			
		}
		Fun operator *(Fun obj1)
		{
			Fun obj2;
			obj2.a = 1;
			obj2.a = a * obj1.a;			
			return obj2;
			
		}
		Fun operator /(Fun obj1)
		{
			Fun obj2;
			obj2.a = 1;
			obj2.a = a / obj1.a;			
			return obj2;
			
		}
		void display()
		{
			cout<<a<<endl;
		}
		
};

int main()
{
	Fun f1,f2,f3,f4,f5,f6,f7,f8;
	f1.value(2);
	f2.value(3);
	f3.value(15);
	f4.value(5);
	f5=f1+f2;
	f6=f3-f4;
	f7=f1*f2;
	f8=f3/f4;
	f5.display();
	f6.display();
	f7.display();
	f8.display();
	
	return 0;
}
