//__STDC__macro
#include<stdio.h>
int main()
{
	if(__STDC__==1)
		printf("This compiler confirms to ANSI and ISO C standards\n");
	else
		printf("This compiler does not comply with ANSI and ISO C standards");
}
