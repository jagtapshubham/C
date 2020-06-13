#include<stdio.h>

int main()
{
	int array1[50],array2[50],i,j,k,size,flag=0;
	
	printf("Enter size of array 1=");
	scanf("%d",&size);
	printf("Enter numbers in array 1:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array1[i]);
	}
	
	printf("\nElements in array 1:\n");
	for(i=0;i<size;i++)
		printf("%d\n",array1[i]);
	
	// Removing Duplicate elements
	
	k=0;
	for(i=0;i<size;i++)
	{
		flag=0;
		for(j=0;j<k;j++)
		{
			if(array1[i]==array2[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			array2[k]=array1[i];
			k++;
		}
	}
	
	//Displaying array after removing duplicate elements
	
	printf("\nElements of array after removing duplicate elements\n");
	for(i=0;i<  k;i++)
		printf("%d\n",array2[i]);
	
 return 0;
}