#include<stdio.h>

void main()
{
	int i,j,k,n1,m1,n,m;
	printf("Enter the size of matrix1: ");
	scanf("%d %d",&n,&m);
	int a[n][m];
	
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
	int b[n1][m1],c[m][n1];
	printf("\nEnter the Value of matrix2: ");
	for(i=0;i<n1;i++)
		{
			for(j=0;j<m1;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
			
	if(n!=m1)
	{
		printf("Matrix Size does not match Subtraction not possible\n");
	}
	else
	{
		for(i=0;i<m;i++)
			{
				for(j=0;j<n1;j++)
				{
					c[i][j]=0;
					for(k=0;k<n;k++)
					{
						c[i][j]+=a[i][k]*b[k][j];
					}
				}
			}
		printf("Multiplied Matrix is :\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n1;j++)
				{
					printf("%d ",c[i][j]);	
				}
			printf("\n");
		}		
	}
}

	
