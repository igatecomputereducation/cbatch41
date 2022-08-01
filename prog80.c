#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any alphabet:");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
		ch=ch-32;
	printf("%c",ch);
	return 0;
}

