#include <stdio.h>

int main()
{
    int n = 0, i;

    printf("ingrese cuantos numero va a ingresar en n:");
    scanf("%d", &n);

    int vector[n];

    for (i = n - 1; i >= 0; i--)
    {
        vector[i] = n + (n - 1 - i);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", vector[i]);
    }

    return 0;
}