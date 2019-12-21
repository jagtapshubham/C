#include<stdio.h>

int main()
{
	int num,nth_bit,result_num;
	
	printf("Enter the number=");
	scanf("%d",&num);
	printf("Enter nth bit to set(0-32)=");
	scanf("%d",&nth_bit);
	
	result_num=num|(1<<nth_bit);
	
	printf("After setting %dth bit of %d result is %d\n",nth_bit,num,result_num);
	
 return 0;
} 