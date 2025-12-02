#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,n,suma;
printf("ingrese cuantos numero va a ingresar:");
scanf("%d",&n);
int vector[n];

for(i=0;i<n;i++){
 printf("ingrese el numero:");
 scanf("%d",&vector[i]);

}
for(i=0;i<n;i++){
 suma=vector[i]+suma;

}
system("cls");
printf(suma);


return 0;
}