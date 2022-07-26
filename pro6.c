#include<stdio.h>
int main()
{
	int fir,sec;
	printf("Enter a 2 digit number..\n");
	scanf("%i%i",&fir,&sec);
	printf("Addition %i\n",fir+sec);
	printf("Subtraction %i\n",fir-sec);
	printf("Product %i\n",fir*sec);
	printf("Division %f",(float)fir/sec);
	return 0;
}

