#include<iostream>
using namespace std;

class Person
{
	public:
	int age;
	string name;	
	
	int age1;
	string name1;
};

class Student: public Person
{
	public:
	float percentage;
	void data()
	{
		cout<<endl<<"Enter the name of Student:";
		cin>>name;
		cout<<endl<<"Enter the Age of Student :";
		cin>>age;
		cout<<endl<<"Enter the Percentge of Student :";
		cin>>percentage;
	}
	void Dispaly()
	{
		cout<<"Student Details............."<<endl;
		cout<<"Name       :"<<name<<endl;
		cout<<"Age        :"<<age<<endl;
		cout<<"Percentage :"<<percentage<<endl;
	}
};

class Teacher: public Person
{
	public:
	
	float salary;
	
	void data()
	{
		cout<<endl<<"Enter the name of Teacher:";
		cin>>name;
		cout<<endl<<"Enter the Age of Teacher :";
		cin>>age;
		cout<<endl<<"Enter the Salary :";
		cin>>salary;
	}
	void Dispaly()
	{
		cout<<"Teacher Details............."<<endl;
		cout<<"Name       :"<<name<<endl;
		cout<<"Age        :"<<age<<endl;
		cout<<"Salary     :"<<salary<<endl;
	}
};

int main()
{
	Student s;
	Teacher t;
	s.data();
	t.data();
	s.Dispaly();
	t.Dispaly();
	return 0;
}
