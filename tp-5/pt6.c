#include<stdio.h>
     int main(){
     
     
int contador=0,pertenecen=0,debajo=0,arriba=0,n;
float x, y, recta;

printf("dame la cantidad de numeros:");
scanf("%d",&n);
while(contador<n){

printf("dame y:");
scanf("%f",&y);

printf("dame x:");
scanf("%f",&x);

recta=(2.0/3.0)*x-2;
if(y==recta){
pertenecen=pertenecen+1;
}
if(y>recta){
arriba=arriba+1;
}
if(y<recta){
debajo=debajo+1;
}
contador=contador+1;
}
printf("estos puntos pertenecen a la recta:%d\n",pertenecen);
printf("estos puntos estan debajo de la recta:%d\n",debajo);
printf("estos puntos estan arriba de la recta:%d\n",arriba);
return 0;
     }

   