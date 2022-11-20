//Write a program of structure employee that provides the following
//information -print and display empno, empname, address and age
#include<stdio.h>
#include<string.h>
struct employee
{
	int e_no,age;
	char name[20],address[200];
}e;
void main()
{
	e.age=19;
	strcpy(e.address,"202-Mangalam Residency,opp.shri nath Hill,Bapa sitaram chowk,Vastral,Ahmedabad-382418");
	e.e_no=1;
	strcpy(e.name,"Ved Patel");
	printf("Employee No:%d",e.e_no);
	printf("\nEmployee Name:");
	puts(e.name);
	printf("Employee age:%d",e.age);
	printf("\nEmployee Address:");
	puts(e.address);
 	 
}
