#include<stdio.h>
int main()
{
	int a[50][50],n,m,i,j;
	
	printf("Enter the class of matrix\n");
	scanf("%i%i",&n,&m);
	
	printf("Enter matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%i",&a[i][j]);
	}
		
	printf("The given matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%5i",a[i][j]);
		printf("\n\n");
	}
	return 0;
}

