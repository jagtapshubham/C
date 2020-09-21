#include<stdio.h>

enum CARS{alto,omni,esteem=3,wagonR,swift=1,dzire};
int main()
{
	printf("The values of various enumeration constant are:\n");
	printf("%d%d%d%d%d%d\n",alto,omni,esteem,wagonR,swift,dzire);
}
