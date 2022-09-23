#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Value into a:");
	scanf("%i",&a);
	printf("Value into b:");
	scanf("%i",&b);
	swap(&a,&b);
	printf("a:%i\nb:%i",a,b);
	return 0;
}
void swap(int *p,int *q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}



