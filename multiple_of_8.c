#include<stdio.h>
int main()
{
	int upper_bound,lower_bound=0,i=0,reminder=0;
	printf("Enter lower bound & upper bound=");
	scanf("%d%d",&lower_bound,&upper_bound);

	 printf("Multiples of 8 are:\n");

	if((lower_bound%8)==0)		//unwanted loop check reduction
	{
		goto s;
	}
	else				//unwanted loop check reduction
	{
		reminder=(lower_bound)%8;
		lower_bound=(lower_bound-reminder)+8;
	}
	
	for(i=lower_bound;i<=upper_bound;i++)
	{
	       s:	if((i&7)==0)		//main logic 	
			{
				printf("%d\n",i);
			}
	}

 return 0;
}
