#include<stdio.h>
int main()
{
	int bre,wid,hei;
	
	printf("Enter breadth, width and height..\n");
	scanf("%i%i%i",&bre,&wid,&hei);
	
	if(bre==wid && wid==hei)
		printf("Cube");
	else
		printf("Not a cube");
	
	return 0;
}

