#include<stdio.h>
void main()
{
	int f=1,i,n;
	printf("Enter the number:-");
	scanf("%d",&n);
	
	for(i=n;i!=1;i--)
	{
		f=f*i;
	}
	printf("\n The factorial of %d is %d",n,f);

 	 
}
