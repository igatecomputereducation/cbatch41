#include<stdio.h>
int main()
{
	float price,bill;
	int qty;
	float *p=&price,*b=&bill;
	int *q=&qty;
	printf("Price:");
	scanf("%f",p);
	printf("Quantity:");
	scanf("%i",q);
	*b=(*p)*(*q);
	printf("Total bill %f",*b);
	return 0;
}

