#include<stdio.h>

int main()
{
	float val=19.9;
	float *ptr=&val;
	
	printf("Value=%f\n",val);
	printf("address value at ptr is %u\n",ptr);
	
	//post decremental
	ptr--;
	printf("address value at ptr after post decremental is %u\n",ptr);
	
	//pre-decremental
	--ptr;
	printf("address value at ptr after pre decremental is %u\n",ptr);

 return 0;
}