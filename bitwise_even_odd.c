//Calculating Even-odd Number by bitwise operator

#include<stdio.h>
int main()
{
	int number;
	printf("Enter number:");
	scanf("%d",&number);
	
	if(number & 1==1)
	{
		printf("Number %d is odd\n",number);
	}
	else
	{
		printf("Number %d is even\n",number);
	}
	
 return 0;
}
