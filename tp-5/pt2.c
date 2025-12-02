#include<stdio.h>


int main(){

int n,promedio,numero,suma,contador;
contador=1;
suma=0;

   printf("dame la cantidad de numeros:");
   scanf("%d",&n);

	
while(contador<=n){
printf("dame un numero:");
scanf("%d",&numero);
suma=suma+numero;
contador=contador+1;
}
promedio=suma/n;
printf("este es el promedio:%d\n",promedio);

return 0;
}

