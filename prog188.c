#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("    *");
		for(j=1;j<=2*(5-i)-1;j++)
			printf("     ");
		for(j=1;j<=i;j++)
		{
			if(j!=5)
				printf("    *");
		}
		printf("\n\n");
	}
	
	return 0;
}

