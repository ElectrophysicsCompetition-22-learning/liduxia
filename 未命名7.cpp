#include <stdio.h>
int main()
{
	int a=12, b;
	b=(a+=a-=a*a);
	printf("a=%d,b=%d\n",a,b);
}
