#include<stdio.h>

int main()
{
	volatile int a=5;
	int b=10;

	a=b;
	printf("a=%d\n",a);
	
 return 0;
}