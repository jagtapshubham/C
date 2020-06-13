#include<stdio.h>

int main()
{
	int array[10],i,j,num,temp;
	
	printf("Enter number of array elements=");
	scanf("%d",&num);
	
	printf("Enter array elements=");
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=num;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("Array after Bubble sort\n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",array[i]);
	}
	
 return 0;
}