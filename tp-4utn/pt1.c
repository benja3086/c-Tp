#include <stdio.h>
#include <stdlib.h>

int main() {
    int contador=1,precio,codigo;
    char descripcion[492];
printf("ingrese de la descripcion:");
fgets(descripcion,492,stdin);

printf("ingrese el codigo:");
scanf("%d",&codigo);
printf("ingrese el precio:");
scanf("%d",&precio);



printf("este es el codigo:%d\n",codigo);
printf("este es el precio:%d\n",precio);
printf("esta es la descripcion:%s",descripcion);





return 0;
}