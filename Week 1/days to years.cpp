#include <stdio.h>
int main()
{
	float days,years;
	printf("Enter the number of days: ");
	scanf("%f", &days);
	years=days/365;
	printf("Years: %f", years);
	return 0;
}
