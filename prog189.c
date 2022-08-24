#include<stdio.h>
int main()
{
	int i,j,x;
	x=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++,x++)
			printf("%5d",x);
		printf("\n\n");
	}
	return 0;
}

