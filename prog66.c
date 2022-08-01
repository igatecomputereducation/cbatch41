#include<stdio.h>
int main()
{
	int pp,sp;
	
	printf("Purchase price:");
	scanf("%i",&pp);
	printf("Selling price:");
	scanf("%i",&sp);

	if(sp==pp)
		printf("No loss no profit");
	if(sp>pp)
		printf("profit of %i",sp-pp);
	if(pp>sp)
		printf("Loss of %i",pp-sp);
	
	return 0;
}

