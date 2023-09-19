#include <stdio.h>
int main ()
{
	int N;
	printf ("Enter the value of N:");
	scanf ("%d", &N);
	printf ("Even numbers from 1 to %d are:\n", N);
	for (int i =2; i<=N ; i+=2)
	{
		printf ("%d\n",i);
	}
	return 0;
}
