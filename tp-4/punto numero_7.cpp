#include<stdio.h>

     int main(){
     
	 
     int medida;
     double signo_pi;
     double perimetro;
	 double diametro;
	 double area;
	 
	 printf("dame la medida del circulo:");
     scanf("%d",&medida);
     
     signo_pi = 3.14159;
     diametro=2 * medida;
     perimetro=2*signo_pi*medida;
     area=signo_pi*medida*medida;
    
    printf("la area es : %.2f\n",area );
    printf("el perimetro es : %.2f \n",perimetro );
    printf("el diametro : %.2f \n",diametro );
	
	 return 0;}
	
	
   
