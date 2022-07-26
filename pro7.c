#include<stdio.h>
int main()
{
	int len,bre,area,pri;
	printf("length:");
	scanf("%i",&len);
	printf("breadth:");
	scanf("%i",&bre);
	area=len*bre;
	pri=2*(len+bre);
	printf("area:%i\n",area);
	printf("perimeter:%i",pri);
	return 0;
}

