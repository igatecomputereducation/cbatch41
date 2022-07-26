#include<stdio.h>
int main()
{
	int a,b,x;
	printf("number into a:");
	scanf("%i",&a);
	printf("number into b:");
	scanf("%i",&b);
	x=a;
	a=b;
	b=x;
	printf("value of a:%i\n",a);
	printf("value of b:%i",b);	
	return 0;
}

