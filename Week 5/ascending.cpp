#include <stdio.h>
int main ()
{
	int n;
	scanf ("%d",&n);
	int arr[n];
	for (int i=0; i<n; i++)
	{
		scanf ("%d", &arr[i]);
	}
	for (int i=0; i<n;i++)
	{
		for (int j=0; j<n-i-1; j++)
	{
		if (arr [j]>arr[j+1])
		{
			int a= arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=a;
		}
	}
	
	}
	
	{
		printf ("The array is : ");
		for (int i=0; i<n;i++)
		{
			printf ("%d ", arr[i]);
		}
	}
	return 0;
}
