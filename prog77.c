#include<stdio.h>
int main()
{
	int a,b,c;
	a=10>20 || 40!=40 || 10<=40;
	b=40<=40 && !0 && 40>=20;
	c=10+20==60/2 && 40<=60 || !1 && 40>=20;
	printf("%i\n%i\n%i",a,b,c);
	return 0;
}

