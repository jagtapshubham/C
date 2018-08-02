//Finding 2nd Maximum number

#include<stdio.h>
int main()
{	
	int i,j,n,array[10],temp,a;
	
	printf("Enter number of elements to be entered ");
	scanf("%d",&n);
	printf("\nEnter numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",array[i]);
	}
	printf("\nSecond Max Number is %d",array[n-2]);

 return 0;
}
