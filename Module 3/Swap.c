#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers:-");
	scanf("%d %d",&a,&b);
	
	printf("\n Before swap:  ");
	printf("a=%d and b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n After swap:  ");
	printf("a=%d and b=%d",a,b);
 	 
}
