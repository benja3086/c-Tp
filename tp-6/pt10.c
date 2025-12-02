#include <stdio.h>

int main()
{
    int i = 0, n, ceros = 0;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);
    int vector[n];
    int vector1[n];
    for (i = 0; i < n; i++)
    {
        vector1[i] = -1;
    }

    for (i = 0; i < n; i++)
    {
        printf("ingrese los numeros del vector:");
        scanf("%d", &vector[i]);
    }
    for (i = 0; i < n; i++)
    {

        if (vector[i] == 0)
        {
            vector1[ceros] = i;
            ceros++;
        }
    }

    printf("este es el vector ingresado:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", vector[i]);
    }

    if (ceros > 0)
    {
        printf("Posiciones de ceros en el vector:\n");
        for (i = 0; i < ceros; i++)
        {
            printf("%d ", vector1[i]);
        }
        printf("\n");
    }
    else
    {
        printf("No se encontraron ceros en el vector.\n");
    }
    return 0;
}
