#include<stdio.h>

int main()
{
	int num;
	int shift,bits;
	
	printf("Enter number=");
	scanf("%d",&num);
	
	bits=sizeof(int)*8;
	shift=1<<(bits-1);
	
	if(num&shift)
		printf("MSB is ON\n");
	else
		printf("MSB is OFF\n");
	
	
 return 0;
}