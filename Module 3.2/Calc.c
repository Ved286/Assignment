#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the two Numbers:- ");
	scanf("%d %d",&a,&b);
	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo\n Enter Your Choice....!\n");
	scanf("%d",&c);
			int i;
	switch(c)
	{
		case 1:
			printf("Addition of two Numbers is %d \n",a+b);
		break;
		case 2:
			printf("Subtraction of two Numbers is %d \n",a-b);
		break;
		case 3:
			printf("Multiplucation of two Numbers is %d \n",a*b);
		break;
		case 4:
			printf("Division of two Numbers is %d \n",a/b);
		break;
		case 5:
			printf("Modulo of two Numbers is %d ",a%b);
		break;
		default:
			printf("Invalid choice");
	}
 	 
}
