#include<iostream>
using namespace std;

class Student
{
	public:
	int roll_no;
	
};

class Test : public Student
{
	public:
	int m[2];
	
};

class Result: public Test
{
	public:
	int total;
	public :
	void data(int a,int b,int c)
	{
		roll_no=a;
		m[0]=b;
		m[1]=c;
		total=m[0]+m[1];
	}
	public:	
	void display()
	{
		cout<<"Roll NO : "<<roll_no<<endl;
		cout<<"Total   : "<<total<<endl;
		cout<<"Avg     : "<<total/2<<endl;
	}
	
};

int main()
{
	Result s1,s2,s3;
	s1.data(1,89,83);
	s2.data(2,99,89);
	s3.data(3,95,86);
	s1.display();
	s2.display();
	s3.display();
	return 0;
}
