#include<stdio.h>
int main()
{
	int mat,phy,che,sm;
	float avg;
	printf("marks in mat,phy,che...\n");
	scanf("%i%i%i",&mat,&phy,&che);
	sm=mat+phy+che;
	avg=sm/3.0;
	printf("total marks:%i\n",sm);
	printf("average marks:%f",avg);
	return 0;
}

