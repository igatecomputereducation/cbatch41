#include<stdio.h>
int main()
{
	char i,j;
	int s;
	for(i='F';i>='A';i--)
	{
		for(j='A';j<=i;j++)
			printf("%5c",j);
		for(s=1;s<=2*('F'-i)-1;s++)
			printf("     ");
		for(j=i;j>='A';j--)
		{
			if(j!='F')
				printf("%5c",j);
		}
		printf("\n\n");
	}
	return 0;
}

