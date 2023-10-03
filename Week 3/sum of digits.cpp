#include <stdio.h>
int main ()
{
	int n,s;
	printf ("Enter an integer: ");
	scanf ("%d",&n);
	while (n!=0)
	{
		int digit=n%10;
		s+= digit;
		n/=10;
	}
	printf ("The sum of the digits is %d\n", s);
	return 0;
}
