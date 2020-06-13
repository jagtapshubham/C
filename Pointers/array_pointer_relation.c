#include<stdio.h>

int main()
{
	int array[3]={10,11,12};
	int *iptr;
	
	iptr=array;
	
	printf("Address of First element of array=%p\n",array);
	printf("Address of Second element of array=%p\n",++iptr);//array+1);
	printf("Address of Third element of array=%p\n",iptr+2);
	
	
	printf("First element of array=%d\n",*array);
	printf("Second element of array=%d\n",*iptr++);
	printf("Third element of array=%d\n",*iptr);
	
 return 0;
}