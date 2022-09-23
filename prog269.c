#include<stdio.h>
int main()
{
	int a[]={11,12,13,14,15};
	int i;
	
	/*
	for(i=0;i<5;i++)
		printf("%5i",a[i]);
	*/
	
	for(i=0;i<5;i++)
		printf("%5i",*(a+i));
	return 0;
}





