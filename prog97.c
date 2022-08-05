#include<stdio.h>
int main()
{
	char grade;
	int cmr,pmr,nu;
	float bill,uch,sch;
	
	printf("Type of electrical connection d/c/i/a:");
	scanf("%c",&grade);
	
	printf("Current month meter reading:");
	scanf("%i",&cmr);
	
	printf("Previous month meter reading:");
	scanf("%i",&pmr);
	
	nu=cmr-pmr;
	
	if(grade=='d')
	{
		sch=150;
		if(nu>500)
			uch=9.95;
		else if(nu>=401)
			uch=8.50;
		else if(nu>=301)
			uch=7.95;
		else if(nu>=201)
			uch=7.10;
		else if(nu>=101)
			uch=5.40;
		else if(nu>=51)
			uch=3.35;
		else
			uch=2.65;
	}
	else if(grade=='c')
	{
		sch=450;
		if(nu>500)
			uch=10.15;
		else if(nu>=301)
			uch=9.60;
		else if(nu>=101)
			uch=9.05;
		else if(nu>=51)
			uch=7.65;
		else
			uch=6.50;
	}
	else if(grade=='i')
	{
		sch=1200;
		uch=15.75;
	}	
	else if(grade=='a')
	{
		sch=0;
		uch=0.75;
	}	
	
	bill=nu*uch+sch;
	
	printf("Number of units %i\n",nu);
	printf("Unit charge %f\n",uch);
	printf("Service charge %f\n",sch);
	printf("Total bill %f",bill);
	return 0;
}

