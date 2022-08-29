#include<stdio.h>
int main()
{
	int a[50],n,i,x,y;
	
	printf("How many elements:");
	scanf("%i",&n);

	printf("Enter integers\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Find what?");
	scanf("%i",&x);
	
	printf("Replace with what?");
	scanf("%i",&y);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
			a[i]=y;
	}

	printf("Result array..\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);
	return 0;
}

