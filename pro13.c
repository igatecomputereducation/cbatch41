#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("what is your salary:");
	scanf("%i",&sal);
	hra=sal*12.0/100;
	da=sal*15.0/100;
	gross=hra+da+sal;
	printf("salary:%i\n",sal);
	printf("house rent allowence:%f\n",hra);
	printf("dearness allowence:%f\n",da);
	printf("gross:%f",gross);		
	return 0;
}

