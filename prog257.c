#include<stdio.h>
int main()
{
	int num;
	num=567;
	printf("%i\n",num);
	printf("%lu\n",&num);
	printf("%i\n",*(&num));
	return 0;
}

