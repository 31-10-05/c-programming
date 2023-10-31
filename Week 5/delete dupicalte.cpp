#include <stdio.h>
int main ()
{
	int n,ns;
	scanf ("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    int uarr[n]; 
    for (int i = 0; i < n; i++) 
	{
        int d = 0; 
        for (int j = 0; j < ns; j++) 
		{
            if (arr[i] == uarr[j]) 
			{
                d = 1; 
                break; 
            }
        }
		if (!d) 
		{
            uarr[ns] = arr[i];
            ns++;
        }
    }
	for (int i = 0; i < ns; i++) 
	{
        arr[i] = uarr[i];
    }
	n =ns;
	printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
	return 0;
}
