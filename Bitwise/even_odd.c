#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter Number=");
	scanf("%d",&num);
	
	if((num&1)==0)
	{
		printf("%d is Even\n",num);
	}
	else
	{
		printf("%d is Odd\n",num);
	}

 return 0;
}
