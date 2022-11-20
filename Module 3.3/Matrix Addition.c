#include<stdio.h>

void main()
{
	int i,j,n1,m1,n,m;
	printf("Enter the size of matrix1: ");
	scanf("%d %d",&n,&m);
	int a[n][m],c[n][m];
	
	printf("\nEnter the Value of matrix1: ");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter the size of matrix2: ");
	scanf("%d %d",&n1,&m1); 	 
	int b[n1][m1];
	printf("\nEnter the Value of matrix2: ");
	for(i=0;i<n1;i++)
		{
			for(j=0;j<m1;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
			
	if(n1!=n && m!=m1)
	{
		printf("Matrix Size does not match Subtraction not possible\n");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
	}
	
	printf("Added Matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			{
				printf("%d ",c[i][j]);	
			}
		printf("\n");
	}		
}
