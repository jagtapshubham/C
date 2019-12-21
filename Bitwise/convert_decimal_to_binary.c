#include<stdio.h>

int main()
{
	int INT_SIZE;
	INT_SIZE=sizeof(int)*8;
	int i,num,array[INT_SIZE],index;
	
	printf("Enter Number=");
	scanf("%d",&num);
	
	index=INT_SIZE-1;
	while(index>=0)
	{
		array[index]=num&1;
		
		index--;
		
		num>>=1;
	}
	
	printf("Converted binary=");
	for(i=0;i<INT_SIZE;i++)
	{
		printf("%d",array[i]);
	}

 return 0;
}