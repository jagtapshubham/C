#include<stdio.h>
#include<conio.h>

int main()
{
	char alphabet;
	int i;
	
	printf("Enter Alphabet=");
	scanf("%c",&alphabet);
	
	switch(alphabet)
	{
		case 'A':
				printf("\n%c is vowel\n",alphabet);
				break;
		case 'a':
				printf("\n%c is vowel\n",alphabet);
				break;
		case 'E':
				printf("\n%c is vowel\n",alphabet);
				break;
		case 'e':
				printf("\n%c is vowel\n",alphabet);
				break;
		case 'I':
				printf("\n%c is vowel\n",alphabet);
				break;
		case 'i':
				printf("\n%c is vowel\n",alphabet);
				break;
		case 'O':
				printf("\n%c is vowel\n",alphabet);
				break;
		case 'o':
				printf("\n%c is vowel\n",alphabet);
				break;
		case 'U':
				printf("\n%c is vowel\n",alphabet);
				break;
		case 'u':
				printf("\n%c is vowel\n",alphabet);
				break;
		default:
				printf("\n%c is not a Vowel\n",alphabet);
				break;
	}
	
 return 0;
}
				