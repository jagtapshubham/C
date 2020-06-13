#include<stdio.h>

int main()
{
	float val=2.0;
	float *fptr,*ptr=&val;
	
	printf("Value=%f\n",val);
	printf("size of float=%d\n",sizeof(float));
	printf("Value of ptr=%u\n",ptr);
	
	//Post incremental of pointer
	
	fptr=ptr++;
	printf("fptr=ptr++ is %u\n",fptr);
	printf("Value of ptr=%u\n",ptr);
	
	//Pre-incremental of pointer
	
	fptr=++ptr;
	printf("fptr=++ptr id %u\n",fptr);
	
 return 0;
}