#include <stdio.h>
int main ()
{
	int n, o, r;
	printf ("Enter an integer :");
	scanf ("%d", &n);
	o=n;
	while (n!=0)
	{
		int remainder = n%10;
		r = r*10+remainder;
		n/=10;
	}
	if (o == r)
	{
		printf ("%d is a palindrome number.\n",o);
	}
	else
	{
		printf ("%d is not a palindrome number.\n" ,o);
	}
	return 0;
}
