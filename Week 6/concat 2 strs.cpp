#include <stdio.h>

char* cstr(const char str1[], const char str2[], char r[]) 
{
    int i = 0, j = 0;

    while (str1[i] != '\0') 
	{
        r[j] = str1[i];
        i++;
        j++;
    }

    while (str2[i] != '\0') 
	 {
        r[j] = str2[i];
        i++;
        j++;
    }

    r[j] = '\0';

    return r;
}

int main() 
{
	char r;
    char str1[100], str2[100], costr[200];

    printf("Enter the first string: ");
    scanf("%s", &str1);

    printf("Enter the second string: ");
    scanf("%s", &str2);

    char* result = cstr(str1, str2, costr);

    printf("Concatenated string: %s\n", r);

    return 0;
}

