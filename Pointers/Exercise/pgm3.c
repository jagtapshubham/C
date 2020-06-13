#include<stdio.h>

int main()
{
	int a=10;
	int *const ptr=&a;
	
	*ptr=20;
	
	printf("%d\n",*ptr);
	
 return 0;
}