#include<stdio.h>
int main()
{
	int n,i,x[50];
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers\n");
	for(i=0;i<n;i++)
		scanf("%i",&x[i]);
	
	printf("Elements in reverse order\n");
	for(i=n-1;i>=0;i--)
		printf("%i\t",x[i]);

	return 0;
}

