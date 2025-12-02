#include <stdio.h>


int estaEnDiagonal(int x, int y) {
    return x == y;
}


int estaEnLados(int x, int y, int M) {
    return (x == 0 || x == M || y == 0 || y == M);
}


int estaEnTrianguloSuperior(int x, int y) {
    return y > x;
}


int estaEnTrianguloInferior(int x, int y) {
    return y < x;
}

int main() {
    int M, N;

   
    printf("Ingrese el valor de M: ");
    scanf("%d", &M);

    printf("Ingrese el número de puntos N: ");
    scanf("%d", &N);

    
    int puntosEnLados = 0, puntosEnDiagonal = 0, puntosEnTrianguloSuperior = 0, puntosEnTrianguloInferior = 0;

  
    for (int i = 0; i < N; i++) {
        int x, y;
        printf("Ingrese las coordenadas del punto %d (x y): ", i + 1);
        scanf("%d %d", &x, &y);

        
        if (estaEnDiagonal(x, y)) {
            puntosEnDiagonal++;
        }

      
        if (estaEnLados(x, y, M)) {
            puntosEnLados++;
        }

       
        if (estaEnTrianguloSuperior(x, y)) {
            puntosEnTrianguloSuperior++;
        }

        
        if (estaEnTrianguloInferior(x, y)) {
            puntosEnTrianguloInferior++;
        }
    }

   
    printf("Cantidad de puntos en los lados: %d\n", puntosEnLados);
    printf("Cantidad de puntos en la diagonal: %d\n", puntosEnDiagonal);
    printf("Cantidad de puntos en el triángulo superior: %d\n", puntosEnTrianguloSuperior);
    printf("Cantidad de puntos en el triángulo inferior: %d\n", puntosEnTrianguloInferior);

    return 0;
}
