#include<stdio.h>
     int main(){
     
     
int contador=0,n1,n2,x,potencia=0;
int buscar;


printf("dame el primer numero:");
scanf("%d",&n1);

printf("dame el segundo numero:");
scanf("%d",&n2);
 if (n2 <= n1) {
        int temp = n2; 
        n2 = n1;
        n1 = temp;
    }
printf("Dame x: ");
scanf("%d", &x);
    
if (x > n1 && x < n2) {     
while (potencia <= n2) {
potencia = x * contador; 
if (potencia <= n2) {
printf("Este es el multiplo %d\n", potencia);
            }
contador++;
}
    } else{
printf("El valor de x no está entre %d y %d\n", n1, n2);
    }
return 0;

}