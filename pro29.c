#include<stdio.h>
int main()
{
	int num;
	printf("enter any decimal number:");
	scanf("%d",&num);
	printf("decimal number %d\n",num);
	printf("octal number %#o\n",num);
	printf("hexa decimal %#X",num);
	return 0;
}

