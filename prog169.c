#include<stdio.h>
int main()
{
	int n,m,i;
	printf("First number:");
	scanf("%i",&n);
	printf("Second number:");
	scanf("%i",&m);
	for(i=(n>m)?n:m;;i--)	//infinite loop
	{
		if(n%i==0 && m%i==0)
		{
			printf("GCD %i",i);
			break;
		}
	}
	return 0;
}

