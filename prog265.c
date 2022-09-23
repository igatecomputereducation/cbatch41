#include<stdio.h>
void subfunc(int,int);
int main()
{
	int a,b;
	a=45;
	b=30;
	subfunc(a,b);
	printf("a:%i\nb:%i",a,b);
	return 0;
}
void subfunc(int x,int y)
{
	x=x+5;
	y=y+5;
}


