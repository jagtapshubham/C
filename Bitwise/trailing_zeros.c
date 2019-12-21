#include<stdio.h>

int main()
{
	int trailing_zeros,i,num;
	
	printf("Enter Number=");
	scanf("%d",&num);
	
	i=0;
	trailing_zeros=0;
	
	while(((num>>i)&1)!=1)
	{
		trailing_zeros++;
		i++;
	}
	printf("Trailing Zeros=%d\n",trailing_zeros);
	
 return 0;
}