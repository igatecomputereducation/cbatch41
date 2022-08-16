#include<stdio.h>
int main()
{
	int n,i,sum,es,os;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	printf("Even numbers\n");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			printf("%i\n",i);
	}
	
	printf("Odd numbers\n");
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
			printf("%i\n",i);
	}
	
	for(sum=0,es=0,os=0,i=1;i<=n;i++)
	{
		sum=sum+i;
		if(i%2==0)
			es=es+i;
		else
			os=os+i;
	}
	
	printf("Sum of all natural numbers %i\n",sum);
	printf("Sum of even numbers %i\n",es);
	printf("Sum of odd numbers %i",os);
	return 0;
}

