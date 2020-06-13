#include<stdio.h>

int main()
{
	int a=10;
	void *vptr;
	
	vptr=&a;
	
	printf("a=%d\n",a);
	printf("Address of a=%p\n",&a);
	printf("vptr=%p\n",vptr);	//*vptr is not allowed
	
 return 0;
}