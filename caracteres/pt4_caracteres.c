#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    do
    {
        printf("ingrese la cantidad de caracteres:");
        scanf("%d", &n);
    } while (n <= 5);
    getchar();

    char org[n + 1];
    printf("ingrese la palabra que deseas :");
    fgets(org, n + 1, stdin);
    int i, len;
    len = strlen(org);
    if (org[len - 1] == '\n')
    {
        org[len - 1] = '\0';
        len--;
    }

    if (len >= 4)
    {

        printf("Las dos primeras letras son: %c%c\n", org[0], org[1]);

        printf("Las dos ultimas letras son: %c%c\n", org[len - 2], org[len - 1]);
    }
    else
    {
        printf("La cadena es demasiado corta.\n");
    }

    return 0;
}
