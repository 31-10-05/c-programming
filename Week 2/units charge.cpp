#include <stdio.h>
int main ()
{
	float units, chargeperunit, surcharge, totalbill;
	printf("Enter the number of units consumed: ");
	scanf("%f", &units);
	printf("Enter the chargeperunit: ");
	scanf("%f", &chargeperunit);
	printf ("Enter the surcharge :");
	scanf("%f", &surcharge);
	totalbill = units* chargeperunit + surcharge;
	printf ("Electricity Bill : %2f\n", totalbill);
	return 0;
}
