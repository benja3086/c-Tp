#include <stdio.h>

int main() {
    int n,contador=1,tiro=0,puntos=0;

printf("ingrese la cantidad de tiros:");
scanf("%d",&n);


while(contador<=n){
printf("ingrese el tiro:");
scanf("%d",&tiro);
if(tiro==1){
puntos=puntos+4;
}
if(tiro==2){
puntos=puntos+3;
}
if(tiro==3){
puntos=puntos+2;
}
if(tiro==4){
puntos=puntos+1;
}
if(4<tiro){
printf("el tiro fue afuera del blanco\n");
}
contador++;
}
printf("esta es la suma de puntos:%d\n",puntos);
return 0;
}


