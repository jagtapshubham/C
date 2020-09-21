#include<stdio.h>

int fun();
int main()
{
	extern int a;
	printf("This a is defined in file1=%d\n",a);
	fun();
}
int a=10;
