#include<stdio.h>

int main()
{
	int array[20],i,j,num,temp;
	
	printf("Enter number of array elements=");
	scanf("%d",&num);
	
	printf("Enter array elements=");
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(array[j]<array[i])
			{
				temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		}
	}
	
	printf("\nElements after selection sort\n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",array[i]);
	}
	
 return 0;
}