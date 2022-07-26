#include<stdio.h>
int main()
{
	float a;
	double b;
	long double c;
	a=22.0/7;
	b=22.0/7;
	c=22.0/7;
	printf("%.20f\n",a);
	printf("%.20lf\n",b);
	printf("%.20Lf",c);
	return 0;
}

