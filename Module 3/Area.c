#include<stdio.h>
void main()
{
	float r,h,b1;
	int l,b;
	printf("Enter the radius of Circle:-");
	scanf("%f",&r);
	printf("Area of Circle is %.2f ",2*3.14*r*r);
	printf("\nEnter the Length and Breath of the Rectangle:-");
	scanf("%d %d",&l,&b);
	printf("Area of Rectangle is %d",l*b);
	printf("\nEnter the height and base of Triangle:- ");
	scanf("%f %f",&h,&b1);
	printf("Area of Triangle is %.2f",0.5*b1*h);
}