#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;

    char org[1000];
    printf("Ingrese la palabra que deseas en mayusculas: ");
    fgets(org, 1000, stdin);

    int len = strlen(org);
    if (org[len - 1] == '\n')
    {
        org[len - 1] = '\0';
        len--;
    }
    for (i = 0; i < len; i++)
    {
        org[i] = tolower(org[i]);
    }
    printf("esta es la palabra es minusculas:%s\n", org);

    return 0;
}
