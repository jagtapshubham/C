#include<stdio.h>

int main()
{
	int array1[50],array2[50],array3[100],size1,size2,i,j,k=0,flag;
	
	printf("Enter size of 1st array =");
	scanf("%d",&size1);
	printf("Enter elements in array 1:\n");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&array1[i]);
	}
	
	printf("Enter size of 2nd array =");
	scanf("%d",&size2);
	printf("Enter elements in array 2:\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&array2[i]);
	}
	
	for(i=0;i<size1;i++)
	{
		flag=0;
		for(j=0;j<k;j++)
		{
			if(array1[i]==array3[j])
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			array3[k]=array1[i];
			k++;
		}
	}
	printf("k=%d\n",k);
	for(i=0;i<size2;i++)
	{
		flag=0;
		for(j=0;j<k;j++)
		{
			//printf("array2[i]=%d == array3[j]=%d\n",array2[i],array3[j]);
			if(array2[i]==array3[j])
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			array3[k]=array2[i];
			k++;
		}
	}
	
	printf("\nArray after merging\n");
	for(i=0;i<k;i++)
	{
		printf("%2d\n",array3[i]);
	}
	
 return 0;
}
