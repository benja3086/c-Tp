#include <stdio.h>

int main()
{
    int x = 0, i = 0, n = 0;

    printf("Ingrese un numero de 4 o mas digitos: ");
    scanf("%d", &x);

    int temp = x;

    while (temp != 0)
    {
        n++;
        temp = temp / 10;
    }

    int vector[n];

    for (i = n - 1; i >= 0; i--)
    {
        vector[i] = x % 10;
        x = x / 10;
    }

    printf("Los digitos del numero son:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", vector[i]);
    }

    return 0;
}
