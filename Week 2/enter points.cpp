#include <stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter Points :");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b&&a>c)
	printf("Maximum point value : %d ",a);
	else if(b>c)
	printf("Maximum point value :%d ",b);
	else
	printf("Maximum point value :%d ",c);
	return 0;
}
