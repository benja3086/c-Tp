#include<stdio.h>


int main(){

int n,promedio,pares,sumapares,impares,sumaimpares,numero,contador,resultado;
float promedio_pares,promedio_impares;
sumapares=0;
sumaimpares=0;
pares=0;
impares=0;
contador=1;
resultado=0;
   printf("dame la cantidad de numeros:");
   scanf("%d",&n);

	
while(contador<=n){
    printf("dame un numero:");
   scanf("%d",&numero);
   resultado=numero  % 2 ;

if(resultado==1){
impares=impares+1;
sumaimpares=sumaimpares+numero;

}
else{ 
pares=pares+1;
sumapares=sumapares+numero;    
}

contador=contador+1;
}
  if (impares > 0) {
        promedio_impares = (float)sumaimpares / impares;
        printf("Este es el promedio de los impares: %.2f\n", promedio_impares);
    } else {
        printf("No se ingresaron numeros impares.\n");
    }
if (pares > 0) {
        promedio_pares = (float)sumapares / pares;
        printf("Este es el promedio de los pares: %.2f\n", promedio_pares);
    } else {
        printf("No se ingresaron numeros pares.\n");
    }

return 0;

}






