#include<stdio.h>

int main()
{
	int num1,num2,X;
	
	printf("Enter number 1=");
	scanf("%d",&num1);
	printf("Enter number 2=");
	scanf("%d",&num2);
	
	X=num1^num2;
	num1=num1^X;
	num2=num2^X;
	
	printf("After Swapping\n");
	printf("Number 1=%d\n",num1);
	printf("Number 2=%d\n",num2);

 return 0;
}