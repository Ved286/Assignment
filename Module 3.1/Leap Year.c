#include<stdio.h>
void main()
{	
	int y;
	printf("Enter the year...:- ");
	scanf("%d",&y);
	
	(y%4==0 && y%100!=0)?  printf("It is a leap year") :  (y%400==0)  ?  printf("It is a leap year"):printf("Not a leap year");
	 
}
