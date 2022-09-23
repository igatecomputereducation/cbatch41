#include<stdio.h>
int main()
{
	float price=45.75;
	float *k;
	k=&price;
	printf("%f\n",price);
	printf("%f\n",*(&price));
	printf("%f",*k);
	return 0;
}

