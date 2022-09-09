#include<stdio.h>
void manip(int,int);
int main()
{
	int a,b;
	printf("Enter 2 integers\n");
	scanf("%i%i",&a,&b);
	manip(a,b);
	return 0;
}
void manip(int x,int y)
{
	printf("Sum %i\n",x+y);
	printf("Subtraction %i\n",x-y);
	printf("Product %i\n",x*y);
	printf("Division %f",(float)x/y);
}
