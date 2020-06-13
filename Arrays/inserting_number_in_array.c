#include<stdio.h>

int main()
{
	int array[50],i,size,k,new_number,position;
	
	printf("Enter size of array=");
	scanf("%d",&size);
	
	printf("Enter number of array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nNumbers of array:\n");
	for(i=0;i<size;i++)
	{
		printf("%2d\n",array[i]);
	}
	
	printf("Enter position to enter=");
	scanf("%d",&position);
	printf("Enter number to insert in=");
	scanf("%d",&new_number);
	
	if(position<=size)
	{
	k=size;
	for(i=size-1;i>=position-1;i--)
	{
		array[k]=array[i];
		k--;
	}
	array[position-1]=new_number;
	}
	else
	{
		array[position-1]=new_number;
	}
	
	//Display array after inserting new number
	
	printf("\nArray after insertion of new number\n");
	for(i=0;i<=size;i++)
	{
		printf("%d\n",array[i]);
	}
	
 return 0;
}