#include <stdio.h>

int main()
{
    int n, i, c;
    long long int numero = 1;
    printf("ingrese cuantos numero va a ingresar en n:");
    scanf("%d", &n);

    int vector[n];
    printf("ingrese c:");
    scanf("%d", &c);

    for (i = 0; i < n; i++)
    {
        printf("Ingrese el valor del elemento vector[%d]: ", i);
        scanf("%d", &vector[i]);
        numero = numero * (vector[i] - c);
    }

    printf("el valor de numero es: %lld\n", numero);

    return 0;
}