#include<stdio.h>
   int main(){
   
   
   int numero1;
   int numero2;
   int resultado;
   int promedio;
   
    
    printf("dame un numero 1:");
	scanf("%d",&numero1);
	
	printf("dame un numero 2:");
	scanf("%d",&numero2);
	
	resultado= numero1 + numero2;
	
	promedio=resultado/2;
	
	printf("este es el promedio: %d \n", promedio);
   
       return 0;
   }
