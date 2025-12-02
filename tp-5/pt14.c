#include <stdio.h>

int main() {
    int numero;
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    if (numero & 1) {
        printf("%d es impar.\n", numero);
    } else {
        printf("%d es par.\n", numero);
    }

    return 0;
}