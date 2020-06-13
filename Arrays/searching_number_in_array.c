#include<stdio.h>

int main()
{
	int flag=0,array[50],i,size,number;
	
	printf("Enter size of array=");
	scanf("%d",&size);
	
	printf("Enter elements in array=");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter number to search in array=");
	scanf("%d",&number);
	
	for(i=0;i<size;i++)
	{
		if(array[i]==number)
		{
			printf("%d Number is in array\n",number);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d number is not present in array\n",number);
	}
	
 return 0;
}