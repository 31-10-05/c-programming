#include <stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter three numbers :");
	scanf ("%d%d%d", &a,&b,&c);
	if(a==b&&b==c)
	{
		printf ("Equal\n");
	}
		else
	{
		printf ("Not equal\n");
	}
	return 0;
}

