#include <stdio.h>
int main ()
{
	int p,n;
	float r,si;
	printf ("Enter the values of p,n,r");
	scanf ("%d%d%f", &p,&n,&r);
	si = p*r*n/100;
	printf ("%f", si);
	return 0;
}
