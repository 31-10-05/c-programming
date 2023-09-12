#include <stdio.h>
int main()
{
	float a,b,prodf;
	int prodg;
	printf("The two floating number:");
	scanf("%f %f", &a,&b);
	prodf=a*b;
	prodg=a*b;
	printf("The prduct as floating point: %f\n Product as Integer: %d", prodf,prodg);
	return 0;
}
