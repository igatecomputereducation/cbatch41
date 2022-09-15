#include<stdio.h>
int process(int,int);
int first(int,int);
int second(int,int);
int main()
{
	printf("%i",process(first(20,10),second(5,8)));
	return 0;
}
int process(int a,int b)
{
	return a-b;
}
int first(int p,int q)
{
	return p*q;
}
int second(int x,int y)
{
	return x+y;
}
