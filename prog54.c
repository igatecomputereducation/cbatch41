#include<stdio.h>
int main()
{
	int choice;
	
	printf("1.Permanent\n2.Temporary\nEnter your choice [1/2]:");
	scanf("%i",&choice);
	
	if(choice==1)
	{
		printf("I.Subrahmanyam\n");
		printf("Karedu-523292\n");
		printf("Andhra pradesh");
	}
	if(choice==2)
	{
		printf("Subbu\n");
		printf("c/o Igate solutions\n");
		printf("Kavali-524201\n");
		printf("Andhra Pradesh");
	}
	
	return 0;
}

