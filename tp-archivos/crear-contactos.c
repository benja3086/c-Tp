#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contacto {
    char nombre[20];
    long long int numero;
    char direccion[20];
};

void agregarContacto(FILE *fp) {
    struct contacto contactos;

    printf("Ingrese el nombre de la persona: ");
    fgets(contactos.nombre, sizeof(contactos.nombre), stdin);
    contactos.nombre[strcspn(contactos.nombre, "\n")] = '\0';

    printf("Ingrese el numero de la persona: ");
    scanf("%lld", &contactos.numero);
    getchar();

    printf("Ingrese la direccion de la persona: ");
    fgets(contactos.direccion, sizeof(contactos.direccion), stdin);
    contactos.direccion[strcspn(contactos.direccion, "\n")] = '\0';

   
    fwrite(&contactos, sizeof(struct contacto), 1, fp);
    printf("Contacto agregado con exito.\n");
}

int compararContactos(const void *a, const void *b) {
    struct contacto *contactoA = (struct contacto *)a;
    struct contacto *contactoB = (struct contacto *)b;
    return strcmp(contactoA->nombre, contactoB->nombre);
}

void mostrarContactos(FILE *fp) {
    struct contacto contactos[100];
    int count = 0;

    rewind(fp); 

    
    while (fread(&contactos[count], sizeof(struct contacto), 1, fp)) {
        count++;
    }

    if (count == 0) {
        printf("No hay contactos guardados.\n");
        return;
    }

    
    qsort(contactos, count, sizeof(struct contacto), compararContactos);

    printf("\nLista de contactos (ordenados):\n");
    for (int i = 0; i < count; i++) {
        printf("Nombre: %s\n", contactos[i].nombre);
        printf("Numero: %lld\n", contactos[i].numero);
        printf("Direccion: %s\n\n", contactos[i].direccion);
    }
}


void borrarContacto(const char *nombreABorrar) {
    FILE *fp, *temp;
    struct contacto contactos;
    int encontrado = 0;

    fp = fopen("carpeta_contactos/contactoscrear.bin", "rb");
    if (fp == NULL) {
        printf("Error al abrir el archivo para leer contactos.\n");
        return;
    }

    temp = fopen("carpeta_contactos/temp.bin", "wb");
    if (temp == NULL) {
        printf("Error al abrir el archivo temporal.\n");
        fclose(fp);
        return;
    }

    while (fread(&contactos, sizeof(struct contacto), 1, fp)) {
        if (strcmp(contactos.nombre, nombreABorrar) != 0) {
            fwrite(&contactos, sizeof(struct contacto), 1, temp);
        } else {
            encontrado = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("carpeta_contactos/contactoscrear.bin");
    rename("carpeta_contactos/temp.bin", "carpeta_contactos/contactoscrear.bin");

    if (encontrado) {
        printf("Contacto eliminado con exito.\n");
    } else {
        printf("Contacto no encontrado.\n");
    }
}

void modificarContacto(FILE *fp) {
    struct contacto contactos;
    char nombreABuscar[20];
    int encontrado = 0;

    printf("Ingrese el nombre del contacto a modificar: ");
    fgets(nombreABuscar, sizeof(nombreABuscar), stdin);
    nombreABuscar[strcspn(nombreABuscar, "\n")] = '\0';

    rewind(fp);

    while (fread(&contactos, sizeof(struct contacto), 1, fp)) {
        if (strcmp(contactos.nombre, nombreABuscar) == 0) {
            encontrado = 1;
            
            fseek(fp, -(long int)sizeof(struct contacto), SEEK_CUR);
            printf("Ingrese el nuevo numero de la persona: ");
            scanf("%lld", &contactos.numero);
            getchar();

            printf("Ingrese la nueva direccion de la persona: ");
            fgets(contactos.direccion, sizeof(contactos.direccion), stdin);
            contactos.direccion[strcspn(contactos.direccion, "\n")] = '\0';

            fwrite(&contactos, sizeof(struct contacto), 1, fp);
            printf("Contacto modificado con exito.\n");
            break;
        }
    }

    if (!encontrado) {
        printf("Contacto no encontrado.\n");
    }
}

int main() {
    FILE *fp;
    int opcion;

    do {
        printf("\n1. Agregar contacto\n2. Mostrar contactos\n3. Borrar contacto\n4. Modificar contacto\n5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        getchar();

        switch (opcion) {
            case 1:
                fp = fopen("carpeta_contactos/contactoscrear.bin", "ab+");
                if (fp == NULL) {
                    printf("Error al abrir el archivo para agregar contactos.\n");
                    return 1;
                }
                agregarContacto(fp);
                fclose(fp);
                break;

            case 2:
                fp = fopen("carpeta_contactos/contactoscrear.bin", "rb");
                if (fp == NULL) {
                    printf("Error al abrir el archivo para leer contactos.\n");
                    break;
                }
                mostrarContactos(fp);
                fclose(fp);
                break;

            case 3:
                fp = fopen("carpeta_contactos/contactoscrear.bin", "rb+");
                if (fp == NULL) {
                    printf("Error al abrir el archivo para borrar contactos.\n");
                    break;
                }
                char nombreABorrar[20];
                printf("Ingrese el nombre del contacto a borrar: ");
                fgets(nombreABorrar, sizeof(nombreABorrar), stdin);
                nombreABorrar[strcspn(nombreABorrar, "\n")] = '\0';
                borrarContacto(nombreABorrar);
                fclose(fp);
                break;

            case 4:
                fp = fopen("carpeta_contactos/contactoscrear.bin", "rb+");
                if (fp == NULL) {
                    printf("Error al abrir el archivo para modificar contactos.\n");
                    break;
                }
                modificarContacto(fp);
                fclose(fp);
                break;

            case 5:
                printf("Saliendo del programa.\n");
                return 0;

            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 5);

    return 0;
}