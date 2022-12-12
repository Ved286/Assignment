#include<stdio.h>
void main()
{
	int c;
	printf("\nEnter 1 to 7....!\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("Monday");
		break;
		case 2:
			printf("Tuesday");
		break;
		case 3:
			printf("Wednesday");
		break;
		case 4:
			printf("Thursday");
		break;
		case 5:
			printf("Friday");
		break;
		case 6:
			printf("saturday");
		break;
		case 7:
			printf("Sunday");
		break;
		default:
			printf("Invalid choice");
	}
 	 
}
