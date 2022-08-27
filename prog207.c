#include<stdio.h>
int main()
{
	int n,i,j,flag,x[50];
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers\n");
	for(i=0;i<n;i++)
		scanf("%i",&x[i]);
	
	flag=1;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(x[i]!=x[j])
		{
			flag=0;
			break;
		}
	}
	
	if(flag)
		printf("Palindrome");
	else
		printf("Not a palindrome");
	return 0;
}

