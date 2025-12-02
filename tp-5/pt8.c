#include<stdio.h>
     int main(){
     
     
int contador=0,primer_cuadrante,segundo_cuadrante,tercer_cuadrante,cuarto_cuadrante,eje_x,eje_y,origen,n;
float y,x;

printf("dame la cantidad de numeros:");
scanf("%d",&n);

while(contador<n){
printf("dame y:");
scanf("%f",&y);

printf("dame x:");
scanf("%f",&x);
if(x!=0 && y!=0){
if(x>0 && y>0)
printf("esta en el primer cuadrante\n");
primer_cuadrante++;
}

if(x<0){
if(y<0)
printf("esta en el tercer cuadrante\n");
tercer_cuadrante++; 
}
if(x<0 && y>0){
printf("esta en el segundo cuadrante\n");
segundo_cuadrante++;
}
if(x>0 && y<0){
printf("esta en el cuarto cuadrante\n");
cuarto_cuadrante++;    
}
if(x==0 && y!=0){
eje_y++;
printf("esta en el eje y\n");
}
if(y==0 && x!=0){
printf("esta en el eje x\n");
eje_x++;
}
if(y==0 && x==0){
printf("esta en el origen\n");
}
contador++;

}
printf("este es el primer cuadrante:%d\n",primer_cuadrante);
printf("este es el segundo cuadrante:%d\n",segundo_cuadrante);
printf("este es el tercer cuadrante:%d\n",tercer_cuadrante);
printf("este es el cuarto cuadrante:%d\n",cuarto_cuadrante);
printf("este es el eje y:%d\n",eje_y);   
printf("este es el eje x:%d\n",eje_x);
printf("este es el origen :%d\n",origen);   

return 0;
        }








