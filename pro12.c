#include<stdio.h>
int main()
{
	int cmr,pmr,nu;
	float bill;
	printf("This month reading:");
	scanf("%i",&cmr);
	printf("Previous month reading:");
	scanf("%i",&pmr);
	nu=cmr-pmr;
	bill=nu*9.15;
	printf("number of uints consumed:%i\n",nu);
	printf("total bill:%f",bill);
	return 0;
}

