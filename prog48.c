#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter any integer:");
	scanf("%i",&n);
	
	if(n==0)
		printf("It is zero");
	
	if(n>0)
		printf("It is +ve number");
	
	if(n<0)
		printf("It is -ve number");
	
	return 0;
}

