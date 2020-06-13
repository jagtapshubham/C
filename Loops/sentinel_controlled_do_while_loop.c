#include<stdio.h>
#include<conio.h>

int main()
{
	int num,min,max,iteration=1;
	char choice;
	
	do{
		printf("\nEnter number=");
		scanf("%d",&num);
		
		if(iteration++==1)
		{
			max=min=num;
		}
		else
		{
			if(num>max)
				max=num;
			else
				if(num<min)
					min=num;
		}
		printf("Want to enter more number(Y|N)=");
		choice=getche();
	}while(choice=='Y'||choice=='y');
	
	printf("\nMaximum number=%d\n",max);
	printf("Minimum number=%d\n",min);
	
 return 0;
}