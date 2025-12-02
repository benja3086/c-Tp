#include<stdio.h>
     int main(){
     
     
int contador=0,numero,numeoro1,decimal=0,decimal1=0,binario,binario1,potencia=1,potencia1=1,resto,resto1,sumadecimal,binario2=0,potencia2=1,resto2;

printf("dame el binario:");
scanf("%d",&binario);
printf("dame el binario 2:");
scanf("%d",&binario1);

while(binario>0){
resto=binario % 10;
decimal=decimal + resto * potencia;
potencia= potencia * 2;
binario= binario / 10;
}
while(binario1>0){
resto1=binario1 % 10;
decimal1=decimal1 + resto1 * potencia1;
potencia1= potencia1 * 2;
binario1= binario1 / 10;
}
sumadecimal=decimal+decimal1;

while(sumadecimal>0){
resto2 = sumadecimal % 2;      
binario2 = binario2 + resto2 * potencia2; 
sumadecimal = sumadecimal / 2;       
potencia2 = potencia2 * 10;  
}   
printf("esta es la suma:%d",binario2);  




return 0;
     }