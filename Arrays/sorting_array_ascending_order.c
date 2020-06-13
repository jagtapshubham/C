#include<stdio.h>

int main()
{
	int array[50],size,i,j,temp;
	
	printf("Enter size of array=");
	scanf("%d",&size);
	
	printf("Enter elements in array=");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("Array Sorted in Ascending order\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",array[i]);
	}
	
 return 0;
}