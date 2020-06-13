#include<stdio.h>

int main()
{
	int i,array[50],size;
	
	printf("Enter size of array=");
	scanf("%d",&size);
	
	printf("Enter Elements in array=");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("Array in reverse order\n");
	for(i=size-1;i>=0;i--)
	{
		printf("%d\n",array[i]);
	}
	
 return 0;
}
