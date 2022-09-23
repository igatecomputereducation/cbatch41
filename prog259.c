#include<stdio.h>
int main()
{
	int num=5242;
	int *x;
	x=&num;
	printf("%i\n",num);
	printf("%i\n",*(&num));
	printf("%i",*x);
	return 0;
}

