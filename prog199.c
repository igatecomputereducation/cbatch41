#include<stdio.h>
int main()
{
	int x[5],i;
	
	printf("Enter 5 integers\n");
	for(i=0;i<5;i++)
		scanf("%i",&x[i]);
	
	
	printf("The given integers are\n");
	for(i=0;i<5;i++)
		printf("%i\t",x[i]);
	
	
	return 0;
}

