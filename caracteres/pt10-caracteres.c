#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    printf("ingrese la cantidad de caracteres:");
    scanf("%d", &n);
    getchar();
    char org[n + 1];
    char tem;
    int i, len, j = 0, mitad;
    char new_str[n * 2];
    printf("ingrese la palabra que deseas :");
    fgets(org, n + 1, stdin);

    len = strlen(org);
    mitad = len / 2;
    printf("esta es la cadena original:%s\n", org);

    for (int i = 0; i < len; i++)
    {
        if (strchr("AEIOUaeiou", org[i]))
        {
            org[i] = tolower(org[i]);
        }
    }

    printf("esta es la cadena modificada:%s\n", org);

    return 0;
}
