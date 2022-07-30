#include<stdio.h>
int main()
{
	
	int len,bre;
	printf("Enter the length and breadth..\n");
	scanf("%i%i",&len,&bre);
	if(len==bre)
		printf("Square");
	else
		printf("Rectangle");
	return 0;
}

