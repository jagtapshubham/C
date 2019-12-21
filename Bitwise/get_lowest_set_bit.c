#include<stdio.h>

int main()
{
	int num,i,lowest_bit=0;
	int int_size;
	
	int_size=sizeof(int)*8;
	
	printf("Enter number=");
	scanf("%d",&num);
	
	i=0;
	do
	{
		if((num>>i)&1)
		{
			lowest_bit=i;
		}
		i++;
	}while(lowest_bit<=0 && i<int_size);
	printf("lowest bit=%d\n",lowest_bit);

 return 0;
}