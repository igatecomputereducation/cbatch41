#include<stdio.h>
int main()
{
	int n,i,x[50],max,min;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers\n");
	for(i=0;i<n;i++)
		scanf("%i",&x[i]);
	
	min=max=x[0];
	for(i=1;i<n;i++)
	{
		if(x[i]>max)
			max=x[i];
		if(x[i]<min)
			min=x[i];
	}
	
	printf("Minimum element %i\n",min);
	printf("Maximum element %i",max);
	return 0;
}

