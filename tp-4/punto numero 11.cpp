#include<stdio.h>
     int main(){
     
	 
     int anio;
     int mes;
     int dia;
     int dia1,anio1,mes1;
     
    
	 printf("dame el año de tu nacimiento :");
     scanf("%d",&anio);
   
     printf("dame el numero de mes de nacimiento:");
     scanf("%d",&mes);
     
      printf("dame el dia de tu nacimiento:");
     scanf("%d",&dia);
     
      printf("dame el año actual:");
     scanf("%d",&anio1);
     
      printf("dame el mes actual:");
     scanf("%d",&mes1);
      
	  printf("dame el dia actual:");
     scanf("%d",&dia1);
     int edad;
     
     edad=anio1-anio;
     
      if (mes1 < mes || (mes1 == mes && dia1 < dia)) {
        edad = edad - 1;
      }
      printf("Esta es tu edad: %d\n", edad);
    
     
     
     
     
     
     
     
    
     
        return 0;
     
     
 }
     
     
     
     
