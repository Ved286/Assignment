#include<stdio.h>
void main()
{
	int i,j,a,b;
	printf("Enter the range for tables:");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n***********\n");
	}
 	 
}
