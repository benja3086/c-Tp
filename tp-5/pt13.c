#include<stdio.h>
     int main(){
     
     
int contador=1,numero,residuo;


printf("dame el numero de 4 digitos:");
scanf("%d",&numero);

while (contador <= numero ){
residuo= numero % contador;
if (residuo==0){
printf("este numero es divisible %d\n",contador);
}
contador++;
}
return 0;
     }


