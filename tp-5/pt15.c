#include <stdio.h>

int main() {
    int n1,n2,contador=0,suma=0;

printf("ingrese n1:");
scanf("%d", &n1);

printf("ingrese n2:");
scanf("%d", &n2);

while(contador<=n2){
if(contador>n1 && contador<=n2){
suma=suma+contador;
}
contador++;



    }
printf("esta es la suma:%d\n",suma);




    return 0;
    }