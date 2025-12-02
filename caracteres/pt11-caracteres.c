#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j = 0;

    char org[1000];
    printf("Ingrese la palabra que deseas en mayusculas: ");
    fgets(org, 1000, stdin);

    int len = strlen(org);
    if (org[len - 1] == '\n')
    {
        org[len - 1] = '\0';
        len--;
    }
    char mayusculas[len * 2];
    char minusculas[len * 2];
    char modificado[len * 2];
    for (i = 0; i < len; i++)
    {
        mayusculas[i] = toupper(org[i]);
        minusculas[i] = tolower(org[i]);
    }

    for (i = 0; i < len; i++)
    {
        if (isalpha(org[i]) && !strchr("aeiouAEIOU", org[i]))
        {
            modificado[j++] = '+';
            modificado[j++] = '+';
        }
        else
        {
            modificado[j++] = org[i];
        }
    }
    modificado[j] = '\0';

    printf("esta es la palabra es minusculas:%s\n", modificado);

    return 0;
}
