#include<stdio.h>
int getsum(int,int);
int main()
{
	int fir,sec,s;
	printf("Enter 2 integers\n");
	scanf("%i%i",&fir,&sec);
	s=getsum(fir,sec);
	printf("Sum %i",s);
	return 0;
}
int getsum(int x,int y)
{
	return x+y;
}
