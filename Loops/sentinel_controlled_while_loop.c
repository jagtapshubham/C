#include<stdio.h>
#include<conio.h>

int main()
{
	int num,max,min;
	char choice;
	
	printf("Enter Number=");
	scanf("%d",&num);
	
	max=min=num;
	
	printf("Want to enter more numbers(Y|N)=");
	choice=getche();
	while(choice=='Y' || choice=='y')
	{
		printf("\nEnter Number=");
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
		printf("Want to enter more numbers(Y|N)=");
		choice=getche();
	}
	
	printf("\nMaximum number=%d\n",max);
	printf("Minimum number=%d\n",min);

 return 0;
}