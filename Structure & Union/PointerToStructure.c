#include<stdio.h>

struct coord
{
	int x,y;
};
int main()
{
	struct coord pt1={1,2};
	struct coord *ptr1=&pt1;
	printf("x=%d y=%d\n",(*ptr1).x,(*ptr1).y);
	struct coord pt2={3,4};
	struct coord *ptr2=&pt2;
	printf("x=%d y=%d\n",ptr2->x,ptr2->y);
}
