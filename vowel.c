#include<stdio.h>
int main()
{
	char c;
	printf("Enter character to check its vowel or not=");
	scanf("%c",&c);
	switch(c)
	{
		case 'o':
			printf("%c is vowel\n",c);
			break;
		case 'a':
			printf("%c is vowel\n",c);
			break;
		case 'i':
			printf("%c is vowel\n",c);
			break;
		case 'e':
			printf("%c is vowel\n",c);
			break;
		case 'u':
			printf("%c is vowel\n",c);
			break;
		case 'A':
                        printf("%c is vowel\n",c);
                        break;
                case 'E':
                        printf("%c is vowel\n",c);
                        break;
                case 'I':
                        printf("%c is vowel\n",c);
                        break;
                case 'O':
                        printf("%c is vowel\n",c);
                        break;
                case 'U':
                        printf("%c is vowel\n",c);
                        break;
		default:
			printf("Not a vowel\n");
			break;
	}
 return 0;
}
