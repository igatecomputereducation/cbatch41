#include<stdio.h>
int main()
{
	int n,i,x[50],es,os;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers\n");
	for(i=0;i<n;i++)
		scanf("%i",&x[i]);
	
	es=os=0;
	for(i=0;i<n;i++)
	{
		if(x[i]%2==0)
			es=es+x[i];
		else
			os=os+x[i];
	}
		
	printf("Even elements sum %i\n",es);
	printf("Odd elements sum %i",os);
	return 0;
}

