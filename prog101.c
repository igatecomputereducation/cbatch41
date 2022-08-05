#include<stdio.h>
int main()
{
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);
	/*
	if(n==0)
		printf("zero");
	else
	{
		if(n>0)
			printf("+ve");
		else
			printf("-ve");
	}*/
	(n==0)?printf("zero"):((n>0)?printf("+ve"):printf("-ve"));
	return 0;
}

