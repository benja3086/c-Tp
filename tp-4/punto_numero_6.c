
#include<stdio.h>

     int main(){
     
	 
	 int lado1;
     int lado2;
     int perimetro;
     int superficie;
    
     printf("dame lado 1:");
     scanf("%d",&lado1);
     
	   
	 printf("dame lado 2:");
     scanf("%d",&lado2);
     
     perimetro=2*(lado1 + lado2);
     superficie= lado1 * lado2;
     
	 printf("la superficie es : %d \n",superficie );
	 printf("el perimetro es : %d \n",perimetro );
	  
	  return 0;
	
	
	
}
