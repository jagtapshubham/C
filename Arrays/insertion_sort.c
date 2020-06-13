#include<stdio.h>

int main()
{
	int array[50],i,j,k,num,value;
	
	printf("Enter number of elements=");
	scanf("%d",&num);
	
	printf("Enter elements=");
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<=num;i++)
	{
		k=0;
		value=array[i];
		while(k!=i)
		{
			if(array[i]<array[k])
			{
				for(j=i;j>k;j--)
				{
					array[j]=array[j-1];
				}
				array[j]=value;
				break;
			}
			k++;
		}
	}
	printf("\nArray after insertion sorting\n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",array[i]);
	}
	
 return 0;
}