#include<stdio.h>
void main()
{
	int n,d,max=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		d=n%10;
		n=n/10;
		if(max<d)
		max=d;
		
	}
	printf("Max digit is %d",max);
 	 
}
