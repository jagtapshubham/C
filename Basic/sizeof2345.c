#include<stdio.h>

int main()
{
	printf("size of floating point literal constant in fractional form 23.45=%d\n",sizeof(23.45f));
 	printf("size of double=%d\n",sizeof(double));
	printf("size of exponential form=%d\n",sizeof(12.e23));


 return 0;
}