#include<stdio.h>
int main()
{
	int sal,sales;
	float hra,da,comm,gross;
	
	printf("Salary:");
	scanf("%i",&sal);
	printf("Sales:");
	scanf("%i",&sales);
	
	if(sal>=50000)
	{
		hra=sal*17.0/100;
		da=sal*19.0/100;
	}
	else
	{
		hra=sal*13.0/100;
		da=sal*15.0/100;
	}
	
	
	if(sales>=100000)
		comm=sales*7.0/100;
	else
		comm=sales*3.0/100;
	
	gross=sal+hra+da+comm;	
	
	printf("Salary %i\n",sal);
	printf("House rent Allowence %f\n",hra);
	printf("Dearness Allowence %f\n",da);
	printf("Commission %f\n",comm);
	printf("Gross salary %f",gross);
	return 0;
}

