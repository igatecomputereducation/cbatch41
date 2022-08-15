#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the limit:");
	scanf("%i",&n);
	i=n;
	while(i>=1)
	{
		printf("%i\n",i);
		i=i-1;
	}
	return 0;
}

