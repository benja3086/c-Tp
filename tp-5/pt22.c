#include <stdio.h>

int main() {
    int contador=1,dia=0;
    long long int rico=1,suma_rico=0,suma_pobre=0,pobre=100;
while(pobre>rico){
rico=rico*2;
pobre=pobre+100;
dia++;
}
printf("este es el dia donde lo supera:%d\n",dia);
rico=1;
pobre=100;
while(contador<=30){
 //printf("Iteracion %d: rico = %lld, pobre = %d\n", contador, rico, pobre);
suma_pobre=suma_pobre+pobre;
suma_rico=suma_rico+rico;

rico=rico*2;
pobre=pobre+100;


contador++;
}
pobre=pobre-100;
printf("esta es la suma que le dio el rico al pobre:%lld\n",rico);
printf("esta es la suma que le dio el pobre al rico:%lld\n",pobre);

}