#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age:");
	scanf("%i",&age);
	if(age>=65)
		printf("Senior");
	else if(age>=25)
		printf("Adults");
	else if(age>=15)
		printf("Youth");
	else if(age>=0)
		printf("Children");
	else
		printf("Invalid input");
	return 0;
}

