#include<stdio.h>
int main()
{
	int mat,phy,che;
	printf("Enter marks in maths, physics and chemistry..\n");
	scanf("%i%i%i",&mat,&phy,&che);
	if(mat>=52)
	{
		if(phy>=21)
		{
			if(che>=21)
				printf("pass");
			else
				printf("Failed");
		}
		else
			printf("Failed");
	}
	else
		printf("Failed");
	
	return 0;
}

