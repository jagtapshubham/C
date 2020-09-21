/*
 This Program tells about Lifetime of an identifier by Local scope variable 
 Addresses of Variable a is different in main() and fun()

*/


#include<stdio.h>

int fun(int a);
int main()
{
	int a=10;
	printf("Address of a=%p\n",&a);
	fun(a);
}

int fun(int a)
{
	printf("Address of a in fun=%p\n",&a);
}
