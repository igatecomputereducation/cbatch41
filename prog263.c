#include<stdio.h>
void rectangle(int,int,int*,int*);
int main()
{
	int len,bre,area,peri;
	printf("Enter 2 sides\n");
	scanf("%i%i",&len,&bre);
	rectangle(len,bre,&area,&peri);
	printf("Area %i\n",area);
	printf("Perimeter %i",peri);
	return 0;
}
void rectangle(int l,int b,int *a,int *p)
{
	*a=l*b;
	*p=2*(l+b);
}
