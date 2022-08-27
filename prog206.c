#include<stdio.h>
int main()
{
	int n,i,j,temp,x[50];
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers\n");
	for(i=0;i<n;i++)
		scanf("%i",&x[i]);
	
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
	}
	
	printf("The result array\n");
	for(i=0;i<n;i++)
		printf("%5i",x[i]);
	return 0;
}

