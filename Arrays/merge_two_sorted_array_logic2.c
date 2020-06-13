#include<stdio.h>

int main()
{
	int a[10],b[10],c[20];
	int i,j,l=0,a_size,b_size,temp;
	
	printf("Enter size of array 1=");
	scanf("%d",&a_size);
	printf("Enter elements of array 1=\n");
	for(i=0;i<a_size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter size of array 2=");
	scanf("%d",&b_size);
	printf("Enter elements of array 2=\n");
	for(i=0;i<b_size;i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<a_size;i++)
	{
		for(j=0;j<b_size;j++)
		{
			if(b[j]<a[i])
			{
				temp=b[j];
				b[j]=a[i];
				a[i]=temp;
			}
		}
		c[l]=a[i];
		l++;
	}
	
	for(i=0;i<b_size;i++)
	{
		for(j=i+1;j<b_size;j++)
		{
			if(b[j]<b[i])
			{
				temp=b[j];
				b[j]=b[i];
				b[i]=temp;
			}
		}
		c[l]=b[i];
		l++;
	}
	
	printf("\nAfter merging 2 arrays\n");	
	for(i=0;i<(a_size+b_size);i++)
	{
		printf("%d\n",c[i]);
	}
	
 return 0;
}