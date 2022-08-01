#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any alphabet:");
	scanf("%c",&ch);
	
	//to convert capital to small
	if(ch>='A' && ch<='Z')
		ch=ch+32;
			
	//to check vowel or consonent
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		printf("Vowel");
	else
		printf("Consonent");
	
	return 0;
}

