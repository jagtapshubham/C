#include<stdio.h>

int main()
{
	int choice=1;
	int ch=2;
	
	switch(choice)
	{
		case 1:
				printf("You are in case 1\n");
				switch(ch)
				{
					case 1:
							printf("You are in nested case 1\n");
							break;
					case 2:
							printf("You are in nested case 2\n");
							break;
				}
	}
	
 return 0;
}