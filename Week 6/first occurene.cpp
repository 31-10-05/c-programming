#include <stdio.h>

int main()
{
    char istr[100], schar;

    printf("Enter a string: ");
    fgets(istr, sizeof(istr), stdin);

    printf("Enter a character to search for: ");
    scanf("%c", &schar);

    int i = 0;
    while (istr[i] != '\0') 
	{
        if (istr[i] == schar) 
		{
            printf("The first occurrence of '%c' is at index %d.\n", schar, i);
            return 0;
        }
        i++;
    }
    printf("'%c' not found in the string.\n", schar);

    return 0;
}

