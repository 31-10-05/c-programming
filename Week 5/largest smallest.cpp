#include <stdio.h>
int main()
{
	int n, k, i, j, t;
    scanf("%d", &n);
	int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
	scanf("%d", &k);
    for (i = 0; i < n- 1; i++) 
	{
        for (j = 0; j < n - i - 1; j++)
		{
            if (arr[j] > arr[j + 1]) 
			{
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    int kth_smallest = arr[k - 1];
    int kth_largest = arr[n - k];

    printf("The %dth smallest element is: %d\n", k, kth_smallest);
    printf("The %dth largest element is: %d\n", k, kth_largest);

    return 0;
}
