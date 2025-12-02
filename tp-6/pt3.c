#include <stdio.h>

int main()
{
    int n, may = 0, p = 0, i;
    printf("ingrese cuantos numero va a ingresar:");
    scanf("%d", &n);
    int vector[n];
    printf("Ingrese el primer elemento: ");
    scanf("%d", &vector[0]);
    may = vector[0];

    for (i = 1; i < n; i++)
    {

        printf("ingrese el siguente elemento:");
        scanf("%d", &vector[i]);
        if (vector[i] > may)
        {
            may = vector[i];
            p = i;
        }
    }
    printf("este es el numero mayor:%d\n", may);
    printf("esta es la posicion:%d\n", p);

    return 0;
}