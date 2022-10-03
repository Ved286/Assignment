#include<stdio.h>
void main()
{
	int n,d;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		d=n%10;
		n=n/10;
		printf("%d",d);
	}

 	 
}
