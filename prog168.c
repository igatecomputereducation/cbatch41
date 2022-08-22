#include<stdio.h>
int main()
{
	int n,m,i;
	
	printf("First number:");
	scanf("%i",&n);
	printf("Second number:");
	scanf("%i",&m);
	
	if(n==m)
		printf("LCM %i",n);
	else
	{
		for(i=(n<m)?n:m;;i++)
		{
			if(i%n==0 && i%m==0)
			{
				printf("LCM %i",i);
				break;
			}
		}
	}
	return 0;
}

