#include<stdio.h>
int main()
{
	int n,i,x[50],sum;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers\n");
	for(i=0;i<n;i++)
		scanf("%i",&x[i]);
	
	sum=0;
	for(i=0;i<n;i++)
		sum=sum+x[i];
		
	printf("Sum of elements %i",sum);	
	return 0;
}

