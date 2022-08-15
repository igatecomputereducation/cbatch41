#include<stdio.h>
int main()
{
	printf("first\n");
	goto igate;
	printf("second\n");
	printf("third\n");
	igate:
	printf("fourth");
	return 0;
}

