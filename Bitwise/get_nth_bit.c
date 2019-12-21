#include<stdio.h>

int main()
{
	int num,n_bit,bit_result;
	
	printf("Enter Number=");
	scanf("%d",&num);
	printf("Enter nth bit position=");
	scanf("%d",&n_bit);
	
	bit_result=(num>>n_bit)&1;
	
	printf("%dth bit of %d is set to %d\n",n_bit,num,bit_result);
	
 return 0;
}