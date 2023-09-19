#include <stdio.h>
int main()
{
	float a,b,c,grosssalary;
	printf ("Enter the basic salary :");
	scanf("%f", &a);
	printf("Enter the percentage of DA :");
	scanf("%f" , &b);
	printf ("Enter the percentage of HRA :");
	scanf ("%f", &c);
	float DAamount= (b/100)*a;
	float HRAamount = (c/100)*a;
	grosssalary= a+ DAamount + HRAamount;
	printf ("Gross Salary : %2f\n", grosssalary);
	return 0;
}
