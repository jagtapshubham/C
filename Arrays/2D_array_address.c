
#include<stdio.h>

int main()
{
	int array[2][3]={{2,1,3},{4,6,5}};
	
	printf("Size of int=%d\n",sizeof(int));
	printf("Address of array=%p\n",array);
	printf("Address of array[0][0]=%p\n",&array[0][0]);
	printf("Address of array[0][1]=%p\n",&array[0][1]);
	printf("Address of array[0][2]=%p\n",&array[0][2]);
	printf("Value of array[0][0]=%p\n",*(*(array+0)+0));
	printf("Value of array[0][1]=%p\n",*(*(array+0)+1));
	printf("Value of array[0][2]=%p\n",*(*(array+0)+2));
		
	printf("\nAddress of array[1][0]=%p\n",&array[1][0]);
	printf("Address of array[1][1]=%p\n",&array[1][1]);
	printf("Address of array[1][2]=%p\n",&array[1][2]);
	printf("Value of array[1][0]=%p\n",*(*(array+1)+0));
	printf("Value of array[1][1]=%p\n",*(*(array+1)+1));
	printf("Value of array[1][2]=%p\n",*(*(array+1)+2));
 return 0;
}