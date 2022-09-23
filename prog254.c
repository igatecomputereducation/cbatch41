#include<stdio.h>
#define ANDROID
int main()
{
	int a,b;
	printf("Enter 2 integers\n");
	scanf("%i%i",&a,&b);
	
#ifdef 	ANDROID
	
	printf("Sum %i\n",a+b);
	printf("Subtraction %i\n",a-b);
	printf("Product %i\n",a*b);
	printf("Division %f\n",(float)a/b);
	
#endif

#ifdef IOS
	
	if(a==b)
		printf("Equals");
	else if(a>b)
		printf("Biggest %i",a);
	else
		printf("Biggest %i",b);
		
#endif	

	getch();
	return 0;
}

