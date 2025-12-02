#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n, i, j, cantidad;

    printf("Ingrese la cantidad de caracteres: ");
    scanf("%d", &n);
    getchar();
    char org[n + 1];
    printf("Ingrese la palabra que deseas: ");
    fgets(org, n + 1, stdin);
    int len = strlen(org);
    if (org[len - 1] == '\n')
    {
        org[len - 1] = '\0';
        len--;
    }

    org[0] = toupper(org[0]);
    for (i = 0; i <= len; i++)
    {

        if (org[i] == ' ')
        {
            org[i] = '-';
            org[i + 1] = toupper(org[i + 1]);
        }
    }
    printf("esta es la palabra:%s\n", org);

    return 0;
}