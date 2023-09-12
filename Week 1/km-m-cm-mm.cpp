#include <stdio.h>
int main ()
{
	float km,m,cm,mm;
	printf("Enter distance in Kilometer:");
	scanf("%f",&km);
	m=km*1000;
	cm=km*100000;
	mm=km*10000000;
	printf("Meters: %f\n Centimeters: %f\n Millimeters: %f", m, cm, mm);
	return 0;
}
