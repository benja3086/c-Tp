#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CADENAS 100
#define MAX_LONGITUD 100

void convertirAMayusculas(char cadena[])
{
    int i = 0;
    while (cadena[i])
    {
        cadena[i] = toupper(cadena[i]);
        i++;
    }
}

void ordenarCadenas(char cadenas[][MAX_LONGITUD], int n)
{
    char temp[MAX_LONGITUD];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(cadenas[j], cadenas[j + 1]) > 0)
            {

                strcpy(temp, cadenas[j]);
                strcpy(cadenas[j], cadenas[j + 1]);
                strcpy(cadenas[j + 1], temp);
            }
        }
    }
}

int main()
{
    int n;

    printf("Ingrese la cantidad de cadenas: ");
    scanf("%d", &n);
    getchar();

    char cadenas[MAX_CADENAS][MAX_LONGITUD];

    for (int i = 0; i < n; i++)
    {
        printf("Ingrese la cadena %d en minúsculas: ", i + 1);
        fgets(cadenas[i], MAX_LONGITUD, stdin);

        size_t len = strlen(cadenas[i]);
        if (cadenas[i][len - 1] == '\n')
        {
            cadenas[i][len - 1] = '\0';
        }

        convertirAMayusculas(cadenas[i]);
    }

    ordenarCadenas(cadenas, n);

    printf("\nCadenas ordenadas alfabéticamente en mayúsculas:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", cadenas[i]);
    }

    return 0;
}
