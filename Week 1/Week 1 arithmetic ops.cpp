#include <stdio.h>
int main ()
{
	int a, b, s, r, m, d;
	scanf ("%d%d", &a, &b);
	s=a+b;
	r=a-b;
	m=a*b;
	d=a/b;
	printf ("%d,%d,%d,%d",s,r,m,d);
	return 0;
}
