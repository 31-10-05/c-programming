#include <stdio.h>
int main ()
{
	int n,k;
	scanf ("%d",&n);
	int arr [n];
	scanf ("%d",&k);
	int c = 0;
	for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) 
	{
        if (arr[i] == k) 
		{
            c++;
        }
    }
    printf("The number %d occurs %d times in the array.\n", k,c);
    return 0;
}
