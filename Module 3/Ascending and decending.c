#include <stdio.h>
void aSort(int a[], int n)
{
	for (int i = 0; i < n-1; i++ )
	{	
		int min_index;
		min_index=i;
		for(int j=i+1; j<n; j++)
			{
			if(a[j]<a[min_index])
				{
					min_index=j;
				}
			}
		int temp = a[min_index];
		a[min_index] = a[i];
		a[i]	= temp;
	}
	printf("\nSorted Array in Ascending Order:\n");
	for (int i = 0; i < n; i++)
	printf("%d ", a[i]);
	
	printf("\n");
}
void dSort(int a[], int n)
{
	for (int i = 0; i < n-1; i++ )
	{	
		int max_index;
		max_index=i;
		for(int j=i+1; j<n; j++)
			{
			if(a[j]>a[max_index])
				{
					max_index=j;
				}
			}
		int temp = a[max_index];
		a[max_index] = a[i];
		a[i]	= temp;
	}
	printf("\nSorted Array in Decending Order:\n");
	for (int i = 0; i < n; i++)
	printf("%d ", a[i]);
	
	printf("\n");
}
void main() 
{
	int n,m,c,i;
	
	printf("\nEnter size of array1: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	
	printf("\nEnter size of array2: ");
	scanf("%d", &m);
	
	int b[m];
	
	for(i=0; i<m; i++)
	scanf("%d", &b[i]);
	
	printf("1.Ascending Order \n2.Desending Order\n");
	scanf("%d",&c);
	
	if(c==1)
	{
	aSort(a,n);
	aSort(b,m);
	}
	
	else if(c==2)
	{
	dSort(a,n);
	dSort(b,m);
	}
	else
	printf("Invalid Input!!...");
}