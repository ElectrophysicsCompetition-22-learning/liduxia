#include <stdio.h>
int main()
{
	int a=0,b=0,c=0;
	a=(b=3,c=5*b,b=10);
	printf("%d,%d,%d\n",a,b,c);
}
