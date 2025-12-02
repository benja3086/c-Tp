#include<stdio.h>

     int main(){
     int lado1;
     int lado2;
     int lado3;
     
   
    
	 printf("dame lado 1:");
     scanf("%d",&lado1);
   
     printf("dame lado 2:");
     scanf("%d",&lado2);
    
	 printf("dame lado 3:");
     scanf("%d",&lado3);
     
       if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        // Verificar si es un triángulo rectángulo
        if ((lado1 * lado1 + lado2 * lado2 == lado3 * lado3) || 
            (lado1 * lado1 + lado3 * lado3 == lado2 * lado2) || 
            (lado2 * lado2 + lado3 * lado3 == lado1 * lado1)) {
            printf("Es un triangulo rectangulo\n");
        } else {
            printf("Es un triangulo pero no es rectangulo\n");
        }
    } else {
        printf("No es un triangulo\n");
    }
 
      return 0;
}
     
     
     
     
     
