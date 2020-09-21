#include<stdio.h>

int fun();
int main()
{
	extern int a;
	printf("Value of a=%d\n",a);
	printf("Address of a=%p\n",&a);
	fun();
}
