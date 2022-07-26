#include<stdio.h>
int main()
{
	int n,fi,sec,thi,sm;
	printf("enter a 3 digit number:");
	scanf("%i",&n);
	thi=n%10;
	n=n/10;
	sec=n%10;
	n=n/10;
	fi=n%10;
	sm=thi+sec+fi;
	printf("sum of all digits:%i",sm);	
	return 0;
}

