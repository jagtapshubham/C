#include<stdio.h>

int main()
{
	int num,i,leading_zeros;
	int int_size,var;
	
	printf("Enter Number=");
	scanf("%d",&num);
	
	leading_zeros=0;
	int_size=sizeof(int)*8;
	var=1<<(int_size-1);
	
	for(i=0;i<(int_size-1);i++)
	{
		if((num<<i)&var)
			break;
		
		leading_zeros++;
	}
	printf("Leading zeros are %d\n",leading_zeros);

 return 0;
}