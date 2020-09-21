#include<stdio.h>
#include<math.h>
#define MAXBOOKS 10

struct book
{
	char title[50];
	char author[25];
	int pages;
	float price;
};

int main()
{
	struct book library[MAXBOOKS];
	int count=0,i;
	char ch;
	float dummy=cos(0.0);
	while(1)
	{
		printf("Enter Information of book %d\n",count+1);
		printf("Enter Title of book\t");
		scanf(" %[^\n]s",library[count].title);
		printf("Enter Author of book\t");
		scanf(" %[^\n]s",library[count].author);
		printf("Enter pages of book\t");
		scanf("%d",&library[count].pages);
		printf("Enter price of book\t");
		scanf("%f",&library[count].price);
		count++;
		if(count==MAXBOOKS)
		{
			printf("Capacity is full\n");
		}
		else
		{
			printf("Do you want to enter more books(Y|N)=");
			scanf(" %c",&ch);
			if(ch=='Y'||ch=='y')
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
	for(i=0;i<count;i++)
	{
		printf("\n%s by %s: %d pages is of Rs %6.2f\n",library[i].title,library[i].author,library[i].pages,library[i].price);
	}

 return 0;
} 
