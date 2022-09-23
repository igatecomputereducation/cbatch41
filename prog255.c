#include<stdio.h>
#define disp(x) #x
#define con(a,b) a##b
int main()
{
	int pq=45;
	printf(disp(hello world));
	printf("\n%i",con(p,q));
	return 0;
}

