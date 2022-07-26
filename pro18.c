#include<stdio.h>
int main()
{
	int a,b;
	printf("number into a:");
	scanf("%i",&a);
	printf("number into b:");
	scanf("%i",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of a:%i\n",a);
	printf("value of b:%i",b);	
	return 0;
}

