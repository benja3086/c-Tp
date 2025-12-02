#include<stdio.h>
#include <math.h>
     int main(){
     
	 
     int x1,x2,y1,y2;
     double arriba;
     double abajo;
     double superficie;
     double perimetro;
     
     
     
     printf("dame la medida de x1:");
     scanf("%d",&x1);
     
     printf("dame la medida de x2:");
     scanf("%d",&x2);
     
     printf("dame la medida de y1:");
     scanf("%d",&y1);
     
     printf("dame la medida de y2:");
     scanf("%d",&y2);
     
	 arriba=x2-y1;
     abajo=x1-y2;
     perimetro= 2 * arriba + abajo;
     superficie=arriba*abajo;
     
	 printf("superficie:%.2f\n",superficie );
     printf("perimetro:%.2f\n",perimetro );
 
 
     return 0;
 
 
 
 }
     
     
     
