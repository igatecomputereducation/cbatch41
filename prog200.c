#include<stdio.h>
int main()
{
	int n,i,x[50];
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers\n");
	for(i=0;i<n;i++)
		scanf("%i",&x[i]);
	
	printf("The given integers are\n");
	for(i=0;i<n;i++)
		printf("%i\t",x[i]);

	return 0;
}

