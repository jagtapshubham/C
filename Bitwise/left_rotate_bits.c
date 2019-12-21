#include<stdio.h>

int main()
{
	int i,num,nbr,dropped_bit;
	int INT_BITS;
	
	INT_BITS=sizeof(int)*8-1;
	
	printf("Enter number=");
	scanf("%d",&num);
	printf("Enter Number of bits to rotate=");
	scanf("%d",&nbr);
	int temp=num;
	
	for(i=0;i<nbr;i++)
	{
		dropped_bit=(num>>INT_BITS)&1;
		num=(num<<1)|dropped_bit;
	}
	printf("%d after %d times left rotate=%d\n",temp,nbr,num);
	
 return 0;
}