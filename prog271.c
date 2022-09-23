#include<stdio.h>
void increment(int*,int,int);
int main()
{
	int a[50],n,i;
	printf("How many elements:");
	scanf("%i",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%i",a+i);
	increment(a,n,5);
	printf("The result array\n");
	for(i=0;i<n;i++)
		printf("%5i",*(a+i));
	return 0;
}
void increment(int *p,int n,int q)
{
	int i;
	for(i=0;i<n;i++)
		*(p+i)=*(p+i)+q;
}



