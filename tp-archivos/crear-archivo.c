#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    int a=0,b=0,c=0;
    FILE *fp;
    fp=fopen("contactoscrear.bin","wb");
     if (fp == NULL) {
        printf("Error al abrir el archivo\n");
        return 1; 
    }
    fprintf(fp,"esto lee la mejor mama del mundo");


     /*if (fscanf(fp, "%d %d %d", &a, &b, &c) != 3) {
        printf("Error al leer los datos del archivo\n");
        fclose(fp);
        return 1;
    }*/



   printf("este es el numero:%d %d %d", a, b,c);
    fclose(fp);
return 0;
}