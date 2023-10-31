#include <stdio.h>
int main ()
{
	int n,t,i;
	scanf ("%d",&n);
	if (n%2!=0)
	{
		printf ("Enter an even sized array : ");
	}
	int arr[n];
	for ( i=0; i<n; i++)
	{
		scanf ("%d", &arr[i]);
	}
	for (i=0; i<n-1; i+=2)
	{
		t=arr[i];
		arr[i] = arr[i + 1];
        arr[i + 1] = t;
	}
	printf ("The array :");
	for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    return 0;
}
