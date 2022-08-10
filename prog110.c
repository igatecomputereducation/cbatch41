#include<stdio.h>
int main()
{
	int n,gr;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	gr=(n%9==0)?9:n%9;
	
	switch(gr)
	{
		case 3:
		case 7:
		case 9:
			printf("Lucky number");
			break;
		case 5:
		case 6:
			printf("Moderate");
			break;
		default:
			printf("Bad luck");
	}
	return 0;
}

