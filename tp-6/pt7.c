#include <stdio.h>

int main()
{
    int n = 0, i = 1, contador = 1;
    printf("ingrese cuantos numero va a ingresar en n:");
    scanf("%d", &n);

    int vector[n];
    for (contador = 0; contador < n; contador++)
    {
        printf("ingrese el numero:");
        scanf("%d", &vector[contador]);
    }
    int x = n;
    int vector1[x];
    contador = 0;

    for (contador = 0; contador < n; contador++)
    {
        vector1[contador] = vector[n - contador - 1];
    }

    printf("los numeros invertidos son:");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", vector1[i]);
    }

    return 0;
}