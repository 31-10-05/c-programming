#include <stdio.h>
int main ()
{
	int n,i,t;
	scanf ("%d", &n);
	int arr [n];
	for (i=0; i<n; i++)
	{
		scanf ("%d", &arr[i]);
	} 
	for (i = 0; i < n / 2; i++) 
	{
        t= arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = t;
    }
    printf("The array is : ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}
