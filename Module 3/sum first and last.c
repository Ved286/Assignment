#include<stdio.h>
void main()
{
	int n,l,f,sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	f=n%10;
	
	while(n!=0)
	{
		l=n%10;
		n=n/10;
	}
	sum=f+l;
	printf("Sum of first and last digit is %d",sum);
}
