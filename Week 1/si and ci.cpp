#include <stdio.h>
#include <math.h>
int main()
{
	float p,r,t,si,ci;
	printf("Enter principal: ");
	scanf("%f", &p);
	printf("Enter rate: ");
	scanf("%f", &r);
	printf("Enter time (in years): ");
	scanf("%f", &t);
	si=((p*r*t)/100);
	ci=p*pow(1+r,t)-p;
	printf("Simple interest: %f\n Compound interest: %f", si, ci);
	return 0;
}
