#include<stdio.h>
int main()
{
	int n,i,es,os;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	es=os=0;
	
	i=1;
	while(i<=n)
	{
		if(i%2==0)
			es=es+i;
		else
			os=os+i;
		i++;
	}
	
	printf("Sum of evens %i\n",es);
	printf("Sum of odds %i",os);
	return 0;
}

