/*
	Name: igate
	Copyright: registered
	Author: subbu
	Date: 28/07/22 10:39
	Description: demo of commentations
*/
#include<stdio.h>
int main()
{
	//declaration of variable
	int a,b,sm,sb,pro;
	
	//taking input from the user
	printf("Enter 2 integers..\n");
	scanf("%i%i",&a,&b);
	
	//main logic
	sm=a+b;
	sb=a-b;
	pro=a*b;
	
	//printing the output
	printf("Sum %i\n",sm);
	printf("Subtraction %i\n",sb);
	printf("Product %i",pro);
	/*
	printf("Sum %i\n",a+b);
	printf("Subtraction %i\n",a-b);
	printf("Product %i",a*b);
	*/
	return 0;
}

