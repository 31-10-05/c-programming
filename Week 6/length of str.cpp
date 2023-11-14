#include <stdio.h>

int strl(const char *str) 
{
    int l = 0;
    while (str[l] != '\0') 
	{
        l++;
    }

    return l;
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", &str);

    int l = strl(str);

    printf("Length of the string: %d\n", l);

    return 0;
}

