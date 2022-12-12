#include<stdio.h>

void main()
{
	int i,l=0;
	char a[100];
	printf("Enter the String: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
 	{
 		l++; 		
	}
	printf("\nGiven string is : ");
	puts(a);
	printf("\nLentgh of the given string is: %d",l);
}
