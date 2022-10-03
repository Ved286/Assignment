#include<stdio.h>
void main()
{
	int n,d,sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		d=n%10;
		n=n/10;
		sum+=d;
		
	}
	printf("Sum of digit of given number is %d",sum);

 	 
}
