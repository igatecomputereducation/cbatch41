#include<stdio.h>
int main()
{
	float cel,fah;
	printf("temperature in celsios:");
	scanf("%f",&cel);
	fah=9.0/5*cel+32;
	printf("temperature in fahrenheit:%f",fah);
	return 0;
}

