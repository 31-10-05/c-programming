#include <stdio.h>
int main()
{
	int a,b,x;
	printf("Enter numbers to swap; \n");
	printf("A=");
    scanf("%d", &a);
	printf("B=");
	scanf("%d", &b);
	x=a;
	a=b;
	b=x;
	printf("A= %d\nB= %d", a,b);
	return 0;	
}
