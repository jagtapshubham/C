#include<stdio.h>

int main()
{
	int flipped_number,num;
	
	printf("Enter number=");
	scanf("%d",&num);
	
	flipped_number=~num;
	printf("Number after flipped %d (in decimal)\n",flipped_number);
	
 return 0;
}