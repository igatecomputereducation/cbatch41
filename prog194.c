#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,limit,sum;
	printf("Enter the limit:");
	scanf("%i",&limit);
	for(n=1;n<=limit;n++)
	{
		t=n;
		for(sum=0;t!=0;t=t/10)
			sum=sum+pow(t%10,3);
		if(sum==n)
			printf("%i\n",n);
	}
	return 0;
}

