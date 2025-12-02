#include<stdio.h>
     int main(){
     
     
int contador=0,numero,binario=0,decimal,potencia=1,resto;


do{
printf("dame el numero decimal:");
scanf("%d",&decimal);

if(decimal<=0){
printf("error:ingrese un numero mayor a 0\n");
}    
}while(decimal<=0);
     
while(decimal>0){
resto = decimal % 2;      
binario = binario + resto * potencia; 
decimal = decimal / 2;       
potencia = potencia * 10;     
    
}
printf("este es el numero binario:%d",binario);
return 0;



}