#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter any natural number:");
	scanf("%i",&n);
	if(n<=1)
	{
		printf("Not a prime");
		//exit(0);
		return 0;
	}
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("Not a prime number");
			//exit(0);
			return 0;
		}	
	}
	printf("Prime number");
	return 0;
}

