#include<stdio.h>
int main()
{
	float wei,hei,bmi;
	printf("Your height:");
	scanf("%f",&hei);
	printf("Your weight:");
	scanf("%f",&wei);
	hei=hei*0.3048;
	bmi=wei/(hei*hei);
	printf("Your body mass index %.2f\n",bmi);
	if(bmi>=30)
		printf("You are suffering from Obis");
	else if(bmi>=25)
		printf("You are over weight");
	else if(bmi>=18.5)
		printf("Normal weight");
	else
		printf("Under weight");
	return 0;
}

