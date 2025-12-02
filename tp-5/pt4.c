#include<stdio.h>


int main(){

int n,numero,positivo,negativo,cero,contador;
contador=1;
positivo=0;
negativo=0;
cero=0;

   printf("dame la cantidad de numeros:");
   scanf("%d",&n);

	
while(contador<=n){
printf("dame un numero:");
scanf("%d",&numero);
if(numero>0){
positivo=positivo+1;
}
else if(numero==0){
cero=cero+1;
}else{
negativo=negativo+1;
}
contador=contador+1;
}
printf("este es la cifra de positivos:%d\n",positivo);
printf("este es la cifra de negativo:%d\n",negativo);
printf("este es la cifra de cero:%d\n",cero);
return 0;
}