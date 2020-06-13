#include<stdio.h>

int main()
{
	int array[50],i,min,max,size;
	
	printf("Enter size of array=");
	scanf("%d",&size);
	printf("Enter Elements of array=");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	min=max=array[0];
	
	for(i=1;i<size;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
		if(array[i]<min)
		{
			min=array[i];
		}
	}
	
	printf("Maximum number in array is %d\n",max);
	printf("Minimum number in array is %d\n",min);
	
 return 0;
}