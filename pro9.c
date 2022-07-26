#include<stdio.h>
int main()
{
	int qty;
	float price,bill,dis,nbill;
	printf("price:");
	scanf("%f",&price);
	printf("quantity:");
	scanf("%i",&qty);
	bill=price*qty;
	dis=bill*5/100;
	nbill=bill-dis;
	printf("total bill:%f\n",bill);
	printf("discount:%f\n",dis);
	printf("net bill:%f",nbill);
	return 0;
}

