//__DATE__macro			#This macro displayes Date of compilation of program
#include<stdio.h>
int main()
{
	// "MMm dd yyyy" if date is single digit it displayes space
	printf("Date of compilation is %s\n",__DATE__);
}
