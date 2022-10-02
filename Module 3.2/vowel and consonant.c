#	include<stdio.h>
void main()
{
	char c;
	printf("Enter the character:-");
	scanf("%c",&c);
	if((c>='a' && c<='z')||(c>='A' && c<='Z'))
	{
		switch(c)
		{
			case 'a':printf("\nCharcter is Vowel");
			break;
			case 'e':printf("\nCharcter is Vowel");
			break;
			case 'i':printf("\nCharcter is Vowel");
			break;
			case 'o':printf("\nCharcter is Vowel");
			break;
			case 'u':printf("\nCharcter is Vowel");
			break;
			case 'A':printf("\nCharcter is Vowel");
			break;
			case 'E':printf("\nCharcter is Vowel");
			break;
			case 'I':printf("\nCharcter is Vowel");
			break;
			case 'O':printf("\nCharcter is Vowel");
			break;
			case 'U':printf("\nCharcter is Vowel");
			break;
			default :
				printf("\nCharcter is Consonant");
		}
	}
	else
	printf("\nNot a vowel or Consonant ");
 	 
}