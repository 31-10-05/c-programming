#include <stdio.h>
int main ()
{
	int n,f,l;
	printf ("Enter the integer ");
	scanf ("%d",&n);
	l=n%10;
	while (n>=10)
	{
		n/=10;
	}
	f=n;
	int sum= f+l;
	printf ("Sum of the first and last digt is: %d\n", sum);
	return 0;
}
