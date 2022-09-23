#include<stdio.h>
int main()
{
	float price;
	price=45.75;
	printf("%.2f\n",price);
	printf("%lu\n",&price);
	printf("%.2f",*(&price));
	return 0;
}

