#include<stdio.h>

int main()
{
	int array[50],i,size,number,flag=0;
	
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
			printf("%d number is present at array index array[%d]\n",number,i);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d number is not present\n");
	}
	
 return 0;
}