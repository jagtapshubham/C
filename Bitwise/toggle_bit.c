#include<stdio.h>

int main()
{
	int num,n_bit,result_num;
	
	printf("Enter number=");
	scanf("%d",&num);
	printf("Enter nth bit=");
	scanf("%d",&n_bit);
	
	result_num=num^(1<<n_bit);
	
	printf("%d after toggling %dth bit is %d\n",num,n_bit,result_num);
	
 return 0;
}