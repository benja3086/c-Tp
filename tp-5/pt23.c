#include <stdio.h>

int main() {
    int contador=1,dado,puntaje_total=0,resto,par=0;

do{
printf("ingrese el tiro:");
scanf("%d",&dado);
resto= dado % 2;
if(resto==1){
puntaje_total=puntaje_total+dado;
contador++;
}else{
par++;
}

}while(par!=1);
printf("esta es la cantidad de tiros:%d\n",contador);
printf("este es el puntaje total:%d\n",puntaje_total);

return 0;
}

