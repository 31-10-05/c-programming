#include <stdio.h>

int main() 
{
    char istr[100], rstr[100];
    int i, j;

    printf("Enter a string: ");
    fgets(istr, sizeof(istr), stdin);

    i = 0;
    while (istr[i] != '\0') 
	{
        i++;
    }

    j = 0;
    i = i - 1; 
    while (i >= 0) 
	{
        rstr[j] = istr[i];
        j++;
        i--;
    }
    rstr[j] = '\0'; 

    printf("Reversed string: %s", rstr);

    return 0;
}

