#include<stdio.h>
int main()
{
	int i,j;

	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("%5d",j);
		printf("\n\n");
	}

	for(i=2;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("%5d",j);
		printf("\n\n");
	}


	return 0;
}

