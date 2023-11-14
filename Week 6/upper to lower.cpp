#include <stdio.h>

int main() 
{
    char istr[100];

    printf("Enter a string in uppercase: ");
    fgets(istr, sizeof(istr), stdin);

    int i = 0;
    while (istr[i] != '\0') 
	{
        if (istr[i] >= 'A' && istr[i] <= 'Z') 
		{
            istr[i] = istr[i] + 32;
        }
        i++;
    }

    printf("String in lowercase: %s", istr);

    return 0;
}

