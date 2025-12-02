#include<stdio.h>
     int main(){
     
     
int contador=0,numero,decimal=0,binario,potencia=1,resto;


do{
printf("dame el numero binario:");
scanf("%d",&binario);

if(binario<=0){
printf("error:ingrese un numero mayor a 0\n");
}    
}while(binario<=0);
     
while(binario>0){
resto=binario % 10;
decimal=decimal + resto * potencia;
potencia= potencia * 2;
binario= binario / 10;
}
printf("este es el numero decimal:%d",decimal);
return 0;



}