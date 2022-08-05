#include<stdio.h>
int main()
{
	int n;
	printf("Enter any digit from 0 to 6:");
	scanf("%i",&n);
	if(n==0)
		printf("Sunday");
	else if(n==1)
		printf("Monday");
	else if(n==2)
		printf("Tuesday");
	else if(n==3)
		printf("Wednesday");
	else if(n==4)
		printf("Thursday");
	else if(n==5)
		printf("Friday");
	else if(n==6)
		printf("Satarday");
	else
		printf("Invalid input");
	return 0;
}

