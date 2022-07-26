#include<stdio.h>
int main()
{
	float hei,wei,bmi;
	printf("height in feets:");
	scanf("%f",&hei);
	printf("weight in kgs:");
	scanf("%f",&wei);
	hei=hei*0.3048;
	bmi=wei/(hei*hei);
	printf("body mass index:%f",bmi);	
	return 0;
}

