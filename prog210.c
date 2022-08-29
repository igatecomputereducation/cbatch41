#include<stdio.h>
int main()
{
	int a[50],n,i,x,count;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Find what?");
	scanf("%i",&x);
	
	count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
			count++;
	}
		
	if(count==0)
		printf("Not existed");
	else
		printf("%i times existed",count);

	return 0;
}

