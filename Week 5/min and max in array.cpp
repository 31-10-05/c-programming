#include <stdio.h>
int main ()
{
	int n,i, min, max, sum=0;
	scanf ("%d",&n);
	int arr[n];
	for (i=0; i<n; i++);
	{
		scanf ("%d", &arr[i]);
		sum += arr[i];
		if (i==0)
		{
			min=max=arr[i];
		}
		if (arr[i]<min)
		{
			min = arr [i];
		}
		if (arr[i]>max)
		{
			max = arr [i];
		}
	}
	float avg = (float)sum/n;
	printf ("Maximum : %d\n", max);
	printf ("Minimum : %d\n", min);
	printf ("Average : %f\n", avg);
	return 0;
}
