#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 integers..\n");
	scanf("%i%i%i",&a,&b,&c);
	
	if(a==b && b==c)
		printf("Equal");
	else
		printf("Not equal");
	
	return 0;
}

