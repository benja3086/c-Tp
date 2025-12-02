#include <stdio.h>

int main() {
    int altura,contador_altura=1,posicion_altura=0;
    float promedio_altura=0,altura1,suma_altura=0,menor_altura=180;

printf("ingrese la cantidad de valores de altura:");
scanf("%d",&altura);

while(contador_altura <= altura){
printf("ingrese la altura:");
scanf("%f",&altura1);

if(menor_altura>=altura1){
menor_altura=altura1;
posicion_altura=contador_altura;
}
suma_altura=suma_altura+altura1;
contador_altura++;
}
promedio_altura=suma_altura/altura;
printf("este es el promedio de altura:%.2f\n",promedio_altura);
printf("esta es la menor altura y la posicion:%.2f\n%d\n",menor_altura,posicion_altura);

int edad,cantidad_edad=0,contador_edad=1,mayor_edad=0,promedio_edades=0,suma_edad=0,posicion_edad;

printf("ingrese la cantidad de valores de edad:");
scanf("%d",&cantidad_edad);
while(contador_edad<=cantidad_edad){
printf("ingrese la edad:");
scanf("%d",&edad);
if (mayor_edad<edad){
mayor_edad=edad;
posicion_edad=contador_edad;
}
suma_edad=suma_edad+edad;
contador_edad++;
 }
promedio_edades=suma_edad/cantidad_edad;
printf("este es el promedio de edad:%d\n",promedio_edades);
printf("esta es la mayor edad y la posicion:%d\n%d\n",mayor_edad,posicion_edad);








return 0;
}