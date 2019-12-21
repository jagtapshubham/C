/* In exclusive-or(^) the odd are converted to 1 and same are converted to 0  */  

#include<stdio.h>

int main()
{
    int a=7,b;

    b=a^1;              //(0111 ^ 0001=0110)
    printf("%d\n",b);

  return 0;
}
