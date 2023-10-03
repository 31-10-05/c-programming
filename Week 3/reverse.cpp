#include <stdio.h>
int main ()
{
	int n,r;
	printf ("Enter an integer : ");
	scanf ("%d", &n);
	while (n!=0 )
	{
		int remainder = n % 10;
		r= r * 10+ remainder;
		n /=10;
	}
	printf ("Reverse of the number is %d\n", r);
	return 0;
}
