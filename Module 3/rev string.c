#include<stdio.h>
int reverse(char a[],int i)
{
	if(a[i]=='\0')
	return 0;
	else
	{
	i++;
	reverse(a,i);
	printf("%c",a[i-1]);
	}
}
void main()
{
	char a[50];
	printf("Enter the string");
	gets(a);
	
	reverse(a,0); 
	puts(a);
}
