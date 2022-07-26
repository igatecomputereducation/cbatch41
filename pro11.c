#include<stdio.h>
int main()
{


	int amt,time;
	float rate,si,total;
	printf("amount:");
	scanf("%i",&amt);
	printf("time in months:");
	scanf("%i",&time);
	printf("rate of interest:");
	scanf("%f",&rate);
	si=amt*time*rate/100;
	total=amt+si;
	printf("-------------------\n");
	printf("amount:%i\n",amt);
	printf("simple interest:%f\n",si);
	printf("total amount:%f",total);
	return 0;
}

