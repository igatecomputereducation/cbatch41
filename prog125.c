#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	i=1;
	while(i<=n)
	{
		if(i%2!=0)
			printf("%i\n",i);
		i=i+1;
	}
	
	return 0;
}

