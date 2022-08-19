#include<stdio.h>
int main()
{
	int n,dig,count;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	printf("Enter any digit:");
	scanf("%i",&dig);
	
	for(count=0;n!=0;n=n/10)
	{
		if(n%10==dig)
			count++;
	}
	
	if(count==0)
		printf("Not existed");
	else
		printf("%i times",count);
		
	return 0;
}

