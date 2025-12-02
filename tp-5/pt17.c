#include <stdio.h>

int main() {
    int n,contador=1;

printf("ingrese n:");
scanf("%d",&n);
int factorial=n;

while(contador<=n){
printf("este es el factorial:%d\n",factorial);
factorial=factorial-1;
contador++;



}
return 0;
}


