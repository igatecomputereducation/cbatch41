#include<stdio.h>
void printbill(float,int);
int main()
{
	float price;
	int qty;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	printbill(price,qty);
	return 0;
}
void printbill(float p,int q)
{
	float bill,dis,nbill;
	bill=p*q;
	dis=bill*7/100;
	nbill=bill-dis;
	printf("Bill %f\n",bill);
	printf("Discount %f\n",dis);
	printf("Net bill %f",nbill);
}
