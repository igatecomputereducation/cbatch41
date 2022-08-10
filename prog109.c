#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any alphabet:");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
		ch=ch+32;
	
	switch(ch)
	{
		case 'a':
			printf("Vowel");
			break;
		case 'e':
			printf("Vowel");
			break;
		case 'i':
			printf("Vowel");
			break;
		case 'o':
			printf("Vowel");
			break;
		case 'u':
			printf("Vowel");
			break;
		default:
			printf("Consonent");
	}
	
	return 0;
}

