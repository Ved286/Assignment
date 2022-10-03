#include<stdio.h>
void main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Fibonacci series Starting from 0:  ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	a=0;b=1;
	printf("\nFibonacci series Starting from 1:  ");
	for(i=0;i<n;i++)
	{
		printf("%d ",b);
		c=a+b;
		a=b;
		b=c;
	}
	
 	 
}
