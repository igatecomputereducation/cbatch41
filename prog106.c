#include<stdio.h>
int main()
{
	int amt,time,ch,flag=1;
	float rate,si,tot;
	
	printf("Amount:");
	scanf("%i",&amt);
	printf("Time in month:");
	scanf("%i",&time);
	printf("1.Same Bank Emp\n2.Govt Emp\n3.PVT Emp\n4.Business\n5.Agri\nEnter your choice [1..5]:");
	scanf("%i",&ch);
	
	switch(ch)
	{
		case 1:
			rate=0.25;
			break;
		case 2:
			rate=0.80;
			break;
		case 3:
			rate=1.25;
			break;
		case 4:
			rate=2.50;
			break;
		case 5:
			rate=0.75;
			break;
		default:
			printf("Invalid choice..");
			flag=0;
	}
	
	if(flag==1)
	{
		si=amt*time*rate/100;
		tot=amt+si;
		printf("Amount %i\n",amt);
		printf("Rate of interest %f\n",rate);
		printf("Simple interest %f\n",si);
		printf("Total amount %f",tot);
	}
	return 0;
}

