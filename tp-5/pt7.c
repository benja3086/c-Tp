#include<stdio.h>
     int main(){
     
     
int contador=0,numero,invertido=0,x,a;

printf("dame el numero:");
scanf("%d",&x);

int original=x;

while(contador<4){
 a = x % 10;              
invertido = invertido * 10 + a;  
 x = x / 10;    
contador=contador+1;
}
printf("este es tu numero ingresado:%d\n",original);
printf("este es tu numero invertido:%d\n",invertido);
return 0;
     }