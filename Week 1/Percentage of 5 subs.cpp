#include <stdio.h>
int main()
{
	float s1, s2, s3, s4, s5, total, percentage;
	printf("Enter marks obtained: ");
	scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
	total= s1+s2+s3+s4+s5;
	percentage= total/100;
	printf("percentage %f", percentage);
	return 0;
}
