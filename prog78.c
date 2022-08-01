#include<stdio.h>
int main()
{
	int mat,phy,che;
	
	printf("Marks in maths, physics and chemistry..\n");
	scanf("%i%i%i",&mat,&phy,&che);
	
	if(mat>=52 && phy>=21 && che>=21)
		printf("Pass");
	else
	{
		if(mat<52)
			printf("Failed in maths\n");
		if(phy<21)
			printf("Failed in physics\n");
		if(che<21)
			printf("Failed in chemistry\n");
	}
	
	return 0;
}

