#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
			printf("     ");
		for(j=1;j<=i;j++)
			printf("%5d",j);
		printf("\n\n");
	}
	return 0;
}
