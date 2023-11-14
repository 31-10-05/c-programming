#include <stdio.h>

char* cstr(char d[], const char src[]) 
{
    int i = 0;
    

    while (src[i] != '\0') 
	{
        d[i] = src[i];
        i++;
    }

    
    d[i] = '\0';

    
    return d;
}

int main() 
{
    char sstr[100], dstr[100];

    printf("Enter a string: ");
    scanf("%s", &sstr);

    char* result = cstr(dstr, sstr);

    printf("Original string: %s\n", sstr);
    printf("Copied string  : %s\n", result);

    return 0;
}

