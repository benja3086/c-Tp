#include <stdio.h>

int main()
{
    int n = 0, i = 0, contador = 0, x, z = 0;
    printf("ingrese cuantos numero va a ingresar en n:");
    scanf("%d", &n);

    int vector[n];

    for (i = 0; i < n; i++)
    {
        vector[i] = 0;
    }

    i = 0;

    while (contador < n)
    {
        printf("Ingrese un valor de x (indice de 0 a %d): ", n - 1);
        scanf("%d", &x);

        if (x >= 0 && x < n)
        {

            if (vector[x] == 0)
            {
                printf("Ingrese el valor z para V[%d]: ", x);
                scanf("%d", &z);
                vector[x] = z;
                contador++;
            }
            else
            {
                printf("La posicion V[%d] ya ha sido llenada. Intente con otra posicion.\n", x);
            }
        }
        else
        {
            printf("x fuera de rango. Intente de nuevo.\n");
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", vector[i]);
    }

    return 0;
}