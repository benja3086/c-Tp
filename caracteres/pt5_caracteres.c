#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;

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
    for (i = 0; i < len - 1; i++)
    {
        if (org[i] == 'c' && org[i + 1] == 'a')
        {
            for (j = i; j < len - 1; j++)
            {
                org[j] = org[j + 2];
            }
        }

        printf("Esta es la cadena modificada: %s\n", org);

        return 0;
    }
}