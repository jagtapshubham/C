#include<stdio.h>

int main()
{
	int num,array[20],i,key,flag=0;
	
	printf("Enter number of element=");
	scanf("%d",&num);
	
	printf("Enter elements=");
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("Enter key to search=");
	scanf("%d",&key);
	
	for(i=0;i<num;i++)
	{
		if(array[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d Key found at %d position\n",key,i+1);
	}
	else
	{
		printf("%d key is not in the list\n",key);
	}
	
 return 0;
}