#include <stdio.h>
int main ()
{
	long long num;
	int length = 0;
	printf ("Enter a number :");
	scanf ("%d", &num);
	if(num<0)
	{
		num=num;
	}
	while (num!=0)
	{
		num /=10;
		length ++;
	}
	printf ("The length of the number is : %d\n", length);
	return 0;
}
