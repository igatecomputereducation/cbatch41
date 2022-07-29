#include<stdio.h>
int main()
{
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);
	if(n==0)
		printf("Zero");
	if(n>0)
		printf("+ve number");
	if(n<0)
		printf("-ve number");
	return 0;
}

