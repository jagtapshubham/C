#include<stdio.h>

int main()
{
	int a=023;		// 0 before a number is octal
	int b=0x23;
	
	
	printf("octal 023 is %d  in decimal\n",a);
	printf("hexadecimal 0x23 is %d in decimal\n",b);
	printf("Size of 23L is %d",sizeof(23L));
 return 0;
}