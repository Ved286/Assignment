#include<stdio.h>
void main()
{
	int p;
	float y,r;
	
	printf("\nEnter the Principal Amt..:-");
	scanf("%d",&p);
	
	printf("\nEnter the Rate of Interest:-");
	scanf("%f",&r);
	
	printf("\nEnter no of years:-");
	scanf("%f",&y);
	
	printf("\nSimple INterest is %.2f",(float)p*(1+r*y));
		
}
