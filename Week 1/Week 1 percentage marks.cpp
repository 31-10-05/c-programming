#include <stdio.h>
int main ()
{
	int a,b,c,d,e;
	float p;
	scanf ("%d%d%d%d%d", &a,&b,&c,&d,&e);
	p=((a+b+c+d+e)/500)*100;
	printf ("The percentage of the student is  %f", p);
	return 0;	
}
