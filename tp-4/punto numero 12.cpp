#include<stdio.h>
     int main(){
     
     
	 
     int numero1,numero2,numero3;
     
     printf("dame el primer numero :");
     scanf("%d",&numero1);
   
     printf("dame el segundo numero:");
     scanf("%d",&numero2);
     
     printf("dame el tercer numero:");
     scanf("%d",&numero3);
 
     if (numero1 > numero2 && numero1 > numero3) {
     if (numero2 > numero3) {
        printf("Este es el orden: %d, %d, %d\n", numero1, numero2, numero3);
     } else {
        printf("Este es el orden: %d, %d, %d\n", numero1, numero3, numero2);
     }
     } else if (numero2 > numero1 && numero2 > numero3) {
    if (numero1 > numero3) {
        printf("Este es el orden: %d, %d, %d\n", numero2, numero1, numero3);
     } else {
        printf("Este es el orden: %d, %d, %d\n", numero2, numero3, numero1);
     }
     } else {
       if (numero1 > numero2) {
        printf("Este es el orden: %d, %d, %d\n", numero3, numero1, numero2);
     } else {
        printf("Este es el orden: %d, %d, %d\n", numero3, numero2, numero1);
     }
}
     if((numero1==numero2+1&& numero2==numero3+1)|| 
	 (numero3 == numero2 + 1 && numero2 == numero1 + 1)){
     	printf("son consecutivos");
     }
     else {
     printf("no son consecutivos");	
     	
     }
     
 
     return 0;
 }
 
     
     
     
     
     
     
     
     
     
