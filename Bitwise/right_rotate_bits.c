#include<stdio.h>

int main()
{
	int num,nbr,i,dropped_bits,temp;
	int INT_BITS;
	INT_BITS=sizeof(int)*8-1;
	
	printf("Enter Number=");
	scanf("%d",&num);
	printf("Enter Number of bits to rotate=");
	scanf("%d",&nbr);
	
	temp=num;
	for(i=0;i<nbr;i++)
	{
		dropped_bits=num&1;
		num=num>>1;
		num=num&(~(1<<INT_BITS));
		num=num|(dropped_bits<<INT_BITS);
	}
	//num=num&(0<<INT_BITS);
	printf("%d rotated %d times result is =%d\n",temp,nbr,num);
 
 return 0;
}