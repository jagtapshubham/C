#include<stdio.h>

int main()
{
	int arr[2][2]={{2,1},{3,5}};
	int (*ptr)[2]=arr;
	
	printf("Address of arr=%p\n",arr);
	printf("Address of row 0 column 1=%p\n",&arr[0][1]);
	printf("Address of row 0=%p\n",arr[0]);
	printf("Address of row 1=%p\n",ptr+1);
	printf("value of row1[0]=%d\n",(*ptr)[0]);
	printf("value of row1[1]=%d\n",(*ptr)[1]);
	
	
 return 0;
}