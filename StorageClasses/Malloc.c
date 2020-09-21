#include<stdio.h>
#include<malloc.h>

int main()
{
	int *ptr;
	ptr=(int*)malloc(sizeof(int));
	*ptr=20;
	printf("Value of a=%d\n",*ptr);
}
