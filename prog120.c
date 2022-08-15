#include<stdio.h>
int main()
{
	int x,ll,ul;
	
	printf("Lower limit:");
	scanf("%i",&ll);
	printf("Upper limit:");
	scanf("%i",&ul);
	
	x=ul;
	igate:
		printf("%i\n",x);
		x=x-1;
	if(x>=ll)
		goto igate;
	
	return 0;
}

