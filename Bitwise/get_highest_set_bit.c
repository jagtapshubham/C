#include<stdio.h>

int main()
{
	int i,num,highest_bit=-1,int_bits;
	
	printf("Enter number=");
	scanf("%d",&num);
	
	int_bits=sizeof(int)*8;
	
	for(i=0;i<int_bits;i++)
	{
		if((num>>i)&1)
		{
			highest_bit=i;
		}
	}
	printf("Highest bit of %d is %d\n",num,highest_bit);
	
 return 0;
}