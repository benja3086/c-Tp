#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    printf("ingrese la cantidad de caracteres:");
    scanf("%d", &n);

    char org[n + 1];
    char tem;
    int i, len, j = 0, mitad;
    char new_str[n * 2];
    printf("ingrese la palabra que deseas :");
    scanf("%s", org);

    len = strlen(org);
    mitad = len / 2;
    printf("esta es la cadena original:%s\n", org);

    for (i = 0; i < len; i++)
    {
        new_str[j++] = org[i];
        if (i < len - 1)
        {
            new_str[j++] = ' ';
        }
    }
    for (i = 0; i < strlen(new_str); i++)
    {
        new_str[i] = toupper(new_str[i]);
    }
    printf("esta es la cadena en mayusculas:%s\n", new_str);

    return 0;
}
