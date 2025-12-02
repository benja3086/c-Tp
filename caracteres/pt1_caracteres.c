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
    int i, mitad, len;

    printf("ingrese la palabra que desea invertir:");
    scanf("%s", org);

    len = strlen(org);
    mitad = len / 2;
    printf("esta es la cadena original:%s\n", org);
    for (i = 0; i < mitad; i++)
    {
        tem = org[i];
        org[i] = org[len - i - 1];
        org[len - i - 1] = tem;
    }
    for (i = 0; i < strlen(org); i++)
    {
        org[i] = toupper(org[i]);
    }
    printf("esta es la cadena invertida:%s\n", org);

    return 0;
}
