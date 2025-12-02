#include<stdio.h>
#include<ctype.h>
#include<string.h>
int es_palabra(char c) {
    return (isalnum(c) || c == '_');}
int main(){

    char palabra[100];
    FILE *fp,*fp_temp;
    fp=fopen("traducir.txt","r");
     if (fp == NULL) {
        printf("Error al abrir el archivo\n");
        return 1; 
    }
    
    fp_temp = fopen("temp.txt", "w");
    if (fp_temp == NULL) {
        printf("Error al crear el archivo temporal\n");
        fclose(fp);
        return 1;
    }
    
  char c;
  int i=0;
    while ((c = fgetc(fp)) != EOF) {
        if (es_palabra(c)) {
            palabra[i++] = c;  
        } else {
            if (i > 0) {
                palabra[i] = '\0';  
                if (strcmp(palabra, "imprimir") == 0) {
                    strcpy(palabra, "printf");
                    
                } else if (strcmp(palabra, "leer") == 0) {
                    strcpy(palabra, "scanf");
                }
                else if(strcmp(palabra, "incluir") == 0)
                {
                     strcpy(palabra, "include");
                }
                else if(strcmp(palabra, "principal") == 0)
                {
                     strcpy(palabra, "main");
                }
                else if(strcmp(palabra, "devolver") == 0)
                {
                     strcpy(palabra, "return");
                }
                 else if(strcmp(palabra, "vacio") == 0)
                {
                     strcpy(palabra, "void");
                }
                
                
                
                fprintf(fp_temp, "%s", palabra); 
                i = 0;
            }
            fputc(c, fp_temp);  
        }
    }
     fclose(fp);
    fclose(fp_temp);

   
    remove("traducir.txt");

    rename("temp.txt", "traducir.txt");

    printf("La palabra ha sido procesada correctamente.\n");
    return 0;
}