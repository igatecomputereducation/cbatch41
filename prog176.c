#include<stdio.h>
int main()
{
	int i,j;
	//first half
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("%5d",j);
		printf("\n\n");
	}
	//second half
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("%5d",j);
		printf("\n\n");
	}
	return 0;
}

