#include<stdio.h>
int main()
{
	int n,i,sum;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	sum=0;
	i=1;
	while(i<=n)
	{
		if(n%i==0)
			sum=sum+i;
		i++;
	}
	printf("Sum of all the factors %i",sum);
	return 0;
}

