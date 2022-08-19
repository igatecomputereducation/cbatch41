#include<stdio.h>
int main()
{
	int x,sum;
	
	sum=0;
	printf("Enter numbers and 0 to stop..\n");
	while(1)
	{
		scanf("%i",&x);
		if(x==0)
			break;
		sum=sum+x;
	}
	
	printf("Sum %i",sum);
	return 0;
}

