#include<stdio.h>

int main()
{
	int array[3]={2,4,3};
	
	printf("Address of array=%p\n",array);
	//printf("value at array[0]=%d\n",*(array+0));
	printf("address of array[0]=%p\n",&array[0]);
	printf("address of array[1]=%p\n",&array[1]);
	printf("address of array[2]=%p\n",&array[2]);
	
 return 0;
}