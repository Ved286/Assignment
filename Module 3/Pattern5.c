#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=0;i<10;i+=2)
	{
		for(k=9;k>i;k--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			
			printf(" *");
			k++;
			
		}
		printf("\n");
	} 	 
}

