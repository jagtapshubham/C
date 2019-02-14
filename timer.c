#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	int sec,min,hrs;
	int ch;
	yes:do{
		printf("\n*****SET TIMER*****\n\n");
		printf("Hours:");
		scanf("%d",&hrs);
		printf("Minutes:");
		scanf("%d",&min);
		printf("Seconds:");
		scanf("%d",&sec);
	}while(sec>60 || min>60 || hrs>24);
	
	if(hrs==0 && min==0 && sec==0)
	{
		printf("\n\"You Have not set a Timer\"");
		printf("\nDo You Want To Set a Timer(1/0):");
		scanf("%d",&ch);
		if(ch==1)
		{
			goto yes;
		}
		else
		{
			exit(0);
		}
	}
	printf("\nTIMER STARTED=====>\n");
	
	int h=hrs;
	int m=min;
	int s=sec;

	if(sec!=0)
	{
	//	s=sec;
		goto sec_loop;
	} 
	if(sec==0)
	{
		goto min_loop;
	}
	
	while(h>0)
	{
		h--;
		if(m==0)
		{
			m=60;	
		}
	min_loop:while(m>0)
	{
		m--;
		if(s==0)  	 
		{
			s=60;
		}
       sec_loop:while(s>0)
		{
			printf("%d:%d:%d\n",h,m,s);
			sleep(1);
			s--; 
		}
	} //end of m while loop
	}	//end of h while loop
	printf("\nTime's Up...\n");
	
 return 0;
}
