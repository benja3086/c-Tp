#include <stdio.h>

int main()
{
    int m, p, n, suma_n, suma_p, i;
    printf("ingrese cuantos numero va a ingresar:");
    scanf("%d", &m);
    int vector[m];

    for (i = 0; i < m; i++)
    {

        printf("ingrese el primer elemento:");
        scanf("%d", &vector[i]);
        if (vector[i] >= 0)
        {
            p = p + vector[i];
        }
        else
        {
            n = n + vector[i];
        }
    }
    printf("esta es la suma de los numeros negativos:%d\n", n);
    printf("esta es la suma de los numeros positivos:%d\n", p);

    return 0;
}