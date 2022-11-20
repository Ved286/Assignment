#include<stdio.h>
int max(int a[],int n)
{
	int max=0,i;
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	return max;
}
void main()
{
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	i=max(a,n);
	printf("Max is %d",i) ;
}
