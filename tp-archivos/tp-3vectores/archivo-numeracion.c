#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    long tamano;
    int i=0,p=0,k=0,l=0,a_vec[100],d_vec[30],j=0;
    FILE *a;
    FILE *b;
    FILE *c;
    int c_vec[100],b_vec[100];

    a=fopen("a.txt","r");
     if (a == NULL) {
        printf("Error al abrir el archivo\n");
        return 1; 
    }
    b=fopen("b.txt","r");
     if (b == NULL) {
        printf("Error al abrir el archivo\n");
        return 1; 
    }
    c=fopen("c.txt","r");
     if (c == NULL) {
        printf("Error al abrir el archivo\n");
        return 1; 
    }

   
    while (fscanf(a,"%d",&a_vec[l])==1){
        l++;
        if (i >= 100) {
            printf("El archivo contiene más de 100 números, se truncara la lectura.\n");
            break;
        }
    }
    
    fclose(a);
       while (fscanf(b,"%d",&b_vec[p])==1){
        p++;
        if (i >= 100) {
            printf("El archivo contiene más de 100 números, se truncara la lectura.\n");
            break;
        }
    }
    
    fclose(b);
       while (fscanf(c,"%d",&c_vec[k])==1){
        k++;
        if (i >= 100) {
            printf("El archivo contiene más de 100 números, se truncara la lectura.\n");
            break;
        }
    }
    fclose(c);
if (k > l && k > p) {
    i = k;
} else if (l > k && l > p) {
    i = l;
} else {
    i = p;
}
 for (j = 0; j < i; j++) {
        d_vec[j] = a_vec[j] + b_vec[j] + c_vec[j];
    }

    
    for (j = 0; j < i; j++) {
        printf("Este es el arreglo: %d\n", d_vec[j]);
    }

    return 0;
}