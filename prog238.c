#include<stdio.h>
float simple_intr(int,int,float);
int main()
{
	int amt,time;
	float rate;
	printf("Amount:");
	scanf("%i",&amt);
	printf("Time in months:");
	scanf("%i",&time);
	printf("Rate of interest:");
	scanf("%f",&rate);
	printf("Simple interest %f\n",simple_intr(amt,time,rate));
	printf("Total %f",amt+simple_intr(amt,time,rate));
	return 0;
}
float simple_intr(int a,int t,float r)
{
	return a*t*r/100;
}

