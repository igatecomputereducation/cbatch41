#include<stdio.h>
int main()
{
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);
	if(n>=-999)
	{
		if(n<=999)
		{
			if(n<=-100)
				printf("Three digit number");
			else
			{
				if(n>=100)
					printf("Three digit number");
				else
					printf("Not a Three digit number");
			}
		}
		else
			printf("Not a three digit number");
	}
	else
		printf("Not a three digit number");

	return 0;
}

