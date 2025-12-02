#include<stdio.h>

     int main(){
     
	 
     int precio;
     double IVA;
     double ingresos_brutos;
     double impuesto_municipal;
     
     printf("dame el precio:");
     scanf("%d",&precio);
     
     
     
	 IVA= precio*21;
     ingresos_brutos=precio*2.5;
     impuesto_municipal = precio*1.5;
     
     printf("IVA:%f\n",IVA );
     printf("ingresos brutos : %f \n",ingresos_brutos );
     printf("impuesto municipal : %f\n",impuesto_municipal );
     
	 
	 
	 return 0;
 }
