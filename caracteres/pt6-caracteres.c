#include <stdio.h>
#include <string.h>

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
    for (i = 0; i < strlen(org); i++)
    {
        switch (org[i])
        {
        case 'a':
            cantidad++;
            break;
        case 'e':
            cantidad++;
            break;
        case 'i':
            cantidad++;
            break;
        case 'o':
            cantidad++;
            break;
        case 'u':
            cantidad++;
            break;
        }
    }

    printf("Esta es la cantidad de vocales: %d\n", cantidad);

    return 0;
}
