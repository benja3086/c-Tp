#include<stdio.h>


int main(){

int n,numero,mayor,menor,contador;
contador=1;

printf("dame la cantidad de numeros:");
scanf("%d",&n);
printf("Dame un numero: ");
scanf("%d", &numero);
     mayor = numero; 
    menor =numero;

while(contador<n){

printf("dame un numero:");
scanf("%d",&numero);

if(numero>mayor){
mayor=numero; 

}else if(numero<menor){
menor=numero;
}
contador=contador+1;
}
printf("este es el numero mayor:%d\n",mayor);
printf("este es el numero menor:%d\n",menor);
return 0;


   }