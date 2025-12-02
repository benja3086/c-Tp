#include <stdio.h>

int main()
{
    int n = 0, i = 0, a, b;

    printf("ingrese cuantos numero va a ingresar en n:");
    scanf("%d", &n);

    if (n < 6)
    {
        printf("la zona del vector tiene que ser almenos 6.\n");
        return 1;
    }
    int vector[n];

    printf("ingrese el valor a:");
    scanf("%d", &a);
    i = i + 1;
    printf("ingrese el valor b:");
    scanf("%d", &b);

    vector[0] = a;
    vector[1] = b;
    vector[2] = vector[0] + vector[1];
    vector[3] = vector[0] - vector[1];
    vector[4] = vector[2] + vector[3];
    vector[5] = vector[2] - vector[3];

    for (i = 6; i < n; i++)
    {
        if (i % 2 == 0)
        {
            vector[i] = vector[i - 2] + vector[i - 4];
        }
        else
        {
            vector[i] = vector[i - 2] - vector[i - 4];
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", vector[i]);
    }

    return 0;
}