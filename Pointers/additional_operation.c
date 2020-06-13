#include<stdio.h>

int main()
{
	float value=1.9;
	float *fptr;
	int i=1;
	
	fptr=&value;
	
	printf("Value=%f\n",value);
	printf("address of fptr=%u\n",fptr);
	fptr=fptr+i;
	printf("Size of float=%d\n",sizeof(float));
	printf("fptr=fptr+i is %u\n",fptr);
	
 return 0;
}