#include <stdio.h>

int main() {
    int n=0,l,contador=0,suma=0;
printf("ingrese l:");
scanf("%d",&l);

while(suma + contador <= l){
suma=suma+contador;
contador++;
}
n=suma;
printf("este es el resultado de n:%d\n",n);


return 0;
}