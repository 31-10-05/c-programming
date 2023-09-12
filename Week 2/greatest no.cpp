#include <stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter the numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	int greatest =a;
	if(b>greatest);
	{
		greatest=b;
	}
	if(c>greatest);
	{
		greatest =c;
	}
	printf("The greatest numer: %d\n", greatest);
	return 0;
}
