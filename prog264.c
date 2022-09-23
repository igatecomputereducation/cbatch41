#include<stdio.h>
void manip(int,int,int*,int*,int*,float*);
int main()
{
	int a,b,sm,sb,pro;
	float div;
	printf("Enter 2 integers\n");
	scanf("%i%i",&a,&b);
	manip(a,b,&sm,&sb,&pro,&div);
	printf("Addition %i\n",sm);
	printf("Subtraction %i\n",sb);
	printf("Product %i\n",pro);
	printf("Division %f",div);
	return 0;
}
void manip(int x,int y,int *p,int *q,int *r,float *s)
{
	*p=x+y;
	*q=x-y;
	*r=x*y;
	*s=(float)x/y;
}

