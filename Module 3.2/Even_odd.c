#include<stdio.h>
void main()
{
	int a[10],i,sum_e=0,sum_o=0,e=0,o=0;
	printf("\nEnter 10 Numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			e++;
			sum_e+=a[i];
		}
		else
		{
			o++;
			sum_o+=a[i];
		}
	}
	printf("\nTotal Even Numbers are %d",e);
	printf("\nSum of Even Number are %d",sum_e);
	printf("\nTotal Odd Numbers  are %d",o);
	printf("\nSum of Odd Number  are %d",sum_o);

 	 
}
