#include<stdio.h>
int main()
{
	float num=12.45;
	float *p=&num;
	float **q=&p;
	printf("%f\n",num);
	printf("%f\n",*p);
	printf("%f",**q);
	return 0;
}




