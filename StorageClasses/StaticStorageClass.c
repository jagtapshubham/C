#include<stdio.h>

int stat_function(int i);	// No Linkage for i variable
int main()
{
	register int i;
	for(i=1;i<=5;i++)
		stat_function(i);
}

int stat_function(int i)
{
	static int a=10;		// 'a' variable is declared only once 
	printf("The value of entry to function on execution no %d is %d\n",i,a);
	printf("The value a after increment  is %d\n",++a);
}
