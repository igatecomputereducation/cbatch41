#include<stdio.h>
int main()
{
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);

	if(n>=-99)
	{
		if(n<=99)
		{
			if(n<=-10)
				printf("Two digit number");
			else
			{
				if(n>=10)
					printf("Two digit number");
				else
					printf("Not a two digit number");
			}
		}
		else
			printf("Not a two digit number");
	}
	else
		printf("Not a two digit number");

	return 0;
}

