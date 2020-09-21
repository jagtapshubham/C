#include<stdio.h>

struct coord
{
	int x,y;	// This is shorthand declaration
};

int main()
{
	struct coord pt1={4,5};
	const struct coord pt2={2,3};

	int tx,ty;
	printf("Enter xt xy=");
	scanf("%d%d",&tx,&ty);

	printf("Pt1 (%d,%d)\n",pt1.x+tx,pt1.y+ty);
	printf("Pt2 (%d,%d)\n",pt2.x+tx,pt2.y+ty);
}
