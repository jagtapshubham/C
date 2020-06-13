#include<stdio.h>

int main()
{
	int i=1;
	float value=10.9;
	float *fptr;
	
	fptr=&value;
	
	printf("Value=%f\n",value);
	printf("Value of fptr=%u\n",fptr);
	fptr=fptr-i;				// fptr=i-fptr is not valid		
	printf("Value of fptr=%u\n",fptr);
	
 return 0;
}