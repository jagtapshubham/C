#include<stdio.h>
#include<conio.h>

int main()
{
	int num,min,max;
	char choice;
	
	printf("Enter Number=");
	scanf("%d",&num);
	
	min=max=num;
	printf("Want to enter more number(Y|N)=");
	choice=getche();
	
	for(;choice=='Y'||choice=='y';)
	{
		printf("\nEnter number=");
		scanf("%d",&num);
		
		if(num>max)
		{
			max=num;
		}
		else
		{
			if(num<min)
			{
				min=num;
			}
		}
		printf("Want to enter more number(Y|N)=");
		choice=getche();
	}
	printf("\nMaximum number=%d\n",max);
	printf("Minimum number=%d\n",min);
	
 return 0;
}