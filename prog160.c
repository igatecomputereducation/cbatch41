#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum;
	printf("Enter a binary:");
	scanf("%i",&n);
	
	for(sum=0,i=0;n!=0;n=n/10,i++)
		sum=sum+n%10*pow(2,i);
	
	printf("Decimal equal %i",sum);
	return 0;
}

