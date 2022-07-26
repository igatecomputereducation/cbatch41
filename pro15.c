#include<stdio.h>
int main()
{
	float cel,fah;
	printf("temperature in fahrenheit:");
	scanf("%f",&fah);
	cel=(fah-32)*5.0/9;
	printf("temperature in celsios:%f",cel);
	return 0;
}

