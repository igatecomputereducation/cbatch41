#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	for(sum=0,i=0;n!=0;n=n/2,i++)
			sum=sum+n%2*pow(10,i);
	
	printf("Binary %i",sum);
	return 0;
}

