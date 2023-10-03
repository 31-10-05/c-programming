#include <stdio.h>
int main ()
{
	int n;
	printf ("Enter the value of n : ");
	scanf ("%d" ,&n);
	int first = 0, second = 1, next;
	if (n<=0)
	{
		printf ("Enter a valid input .\n");
	}
	else if ( n==1)
	{
		printf ("The %dth Fibonacci number is %d\n" ,n,first);
	}
	else if ( n==2)
	{
		printf ("The %dth Fibonacci number is %d\n" ,n,second);
	}
	else 
	{
		for (int i = 3; i<=n; ++i)
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf ("The %dth Fibonacci number is %d\n", n, second);
	}
	return 0;
}
