#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50],i,j,n,m;
	
	printf("Enter the class of matrix\n");
	scanf("%i%i",&n,&m);
	
	printf("Enter the first matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%i",&a[i][j]);
	}
	
	printf("Enter the second matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%i",&b[i][j]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			c[i][j]=a[i][j]+b[i][j];
	}
	
	printf("Addition of 2 matrices\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%5i",c[i][j]);
		printf("\n\n");
	}
	return 0;
}

