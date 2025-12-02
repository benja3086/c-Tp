#include <stdio.h>
#include <stdlib.h>

double calcularArea(int x, int y) {
    return (x * y) / 2.0;
}

int determinarCuadrante(int x, int y) {
    if (x > 0 && y > 0) return 1;
    if (x < 0 && y > 0) return 2;
    if (x < 0 && y < 0) return 3;
    if (x > 0 && y < 0) return 4;
    return 0; 
}

int main() {
    int N;

    printf("Ingrese el número de puntos N: ");
    scanf("%d", &N);

    double sumaPositiva = 0.0, sumaNegativa = 0.0;
    int triángulosCuadrante1 = 0, triángulosCuadrante2 = 0, triángulosCuadrante3 = 0, triángulosCuadrante4 = 0;

    for (int i = 0; i < N; i++) {
        int x, y;
        printf("Ingrese las coordenadas del punto %d (x y): ", i + 1);
        scanf("%d %d", &x, &y);

        double area = calcularArea(x, y);

       
        if (area >= 0) {
            sumaPositiva += area;
        } else {
            sumaNegativa += area;
        }

        int cuadrante = determinarCuadrante(x, y);
        switch (cuadrante) {
            case 1: triángulosCuadrante1++; break;
            case 2: triángulosCuadrante2++; break;
            case 3: triángulosCuadrante3++; break;
            case 4: triángulosCuadrante4++; break;
            default: printf("El punto %d está en un eje.\n", i + 1); break;
        }
    }

    printf("Suma de areas positivas: %.2f\n", sumaPositiva);
    printf("Suma de areas negativas: %.2f\n", sumaNegativa);
    printf("Cantidad de triangulos en el cuadrante 1: %d\n", triángulosCuadrante1);
    printf("Cantidad de triangulos en el cuadrante 2: %d\n", triángulosCuadrante2);
    printf("Cantidad de triangulos en el cuadrante 3: %d\n", triángulosCuadrante3);
    printf("Cantidad de triangulos en el cuadrante 4: %d\n", triángulosCuadrante4);

    return 0;
}
