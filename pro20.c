#include<stdio.h>
int main()
{
	
	int n,fi,se,th,fo,sm;
	printf("enter a 4 digit number:");
	scanf("%i",&n);
	fo=n%10;
	n=n/10;
	th=n%10;
	n=n/10;
	se=n%10;
	n=n/10;
	fi=n%10;
	sm=fo+th+se+fi;
	printf("sum of digit:%i",sm);
	return 0;
}

