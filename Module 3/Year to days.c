#include<stdio.h>
void main()
{
	float y;
	int d;
	printf("Enter the year:-");
	scanf("%f",&y);
	
	printf("\n%.2f years = %.2f days",y,(y*365));
	
 	printf("\nEnter no of days;");
 	scanf("%d",&d);
 	
 	printf("\n %d Days = %.2f Years",d,(float)d/365);
}
