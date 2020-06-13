#include<stdio.h>

int main()
{
	int array[50],i,k,size,position;
	
	printf("Enter size of array=");
	scanf("%d",&size);
	printf("Enter number in array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&array[i]);
	
	printf("Elements of array:\n");
	for(i=0;i<size;i++)
		printf("%2d\n",array[i]);
	
	printf("Enter position of number to delete=");
	scanf("%d",&position);
	
	//Deleting number
	if(position<=size)
	{
	k=position-1;
	for(i=position;i<size;i++)
	{
		array[k]=array[i];
		k++;
	}
	array[size-1]=0;
	}
	else
	{
		array[size-1]=0;
	}
	//Displaying number after Deleting number
	printf("\nArray after deleting number\n");
	for(i=0;i<size-1;i++)
		printf("%2d\n",array[i]);
	
 return 0;
}