#include <stdio.h>
int main ()
{
	int a,b,c;
	printf ("Enter the three sides of a trinagle : ");
	scanf ("%d%d%d", &a,&b,&c);
	if (a==b&&b==c)
	printf ("Equilateral \n");
	else if (a==b||b==c||a==c)
	printf ("Isoceles \n");
	else
	printf("Scalene \n");
	return 0;
}
