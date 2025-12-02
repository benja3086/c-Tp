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

    printf("Ingrese el número de la persona: ");
    scanf("%lld", &contactos.numero);
    getchar();

    printf("Ingrese la dirección de la persona: ");
    fgets(contactos.direccion, sizeof(contactos.direccion), stdin);
    contactos.direccion[strcspn(contactos.direccion, "\n")] = '\0';

    fprintf(fp, "%s %lld %s\n", contactos.nombre, contactos.numero, contactos.direccion);
    printf("Contacto agregado con éxito.\n");
}

void mostrarContactos(FILE *fp) {
    struct contacto contactos;
    rewind(fp);

    printf("\nLista de contactos:\n");
    while (fscanf(fp, "%19s %lld %19[^\n]", contactos.nombre, &contactos.numero, contactos.direccion) == 3) {
        printf("Nombre: %s\n", contactos.nombre);
        printf("Numero: %lld\n", contactos.numero);
        printf("Direccion: %s\n\n", contactos.direccion);
    }
}

void borrarContacto(const char *nombreABorrar) {
    FILE *fp, *temp;
    struct contacto contactos;
    int encontrado = 0;

    fp = fopen("carpeta_contactos/contactos.txt", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo para leer contactos.\n");
        return;
    }

    temp = fopen("carpeta_contactos/temp.txt", "w");
    if (temp == NULL) {
        printf("Error al abrir el archivo temporal.\n");
        fclose(fp);
        return;
    }

    // Copia todos los contactos excepto el que queremos borrar
    while (fscanf(fp, "%19s %lld %19[^\n]", contactos.nombre, &contactos.numero, contactos.direccion) == 3) {
        if (strcmp(contactos.nombre, nombreABorrar) != 0) {
            fprintf(temp, "%s %lld %s\n", contactos.nombre, contactos.numero, contactos.direccion);
        } else {
            encontrado = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    // Reemplaza el archivo original por el archivo temporal
    remove("carpeta_contactos/contactos.txt");
    rename("carpeta_contactos/temp.txt", "carpeta_contactos/contactos.txt");

    if (encontrado) {
        printf("Contacto eliminado con éxito.\n");
    } else {
        printf("Contacto no encontrado.\n");
    }
}

int main() {
    FILE *fp;
    int opcion;
    char nombreABorrar[20];

    do {
        printf("\n1. Agregar contacto\n2. Mostrar contactos\n3. Borrar contacto\n4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        getchar();

        switch (opcion) {
            case 1:
                fp = fopen("carpeta_contactos/contactos.txt", "a");
                if (fp == NULL) {
                    printf("Error al abrir el archivo para agregar contactos.\n");
                    return 1;
                }
                agregarContacto(fp);
                fclose(fp);
                break;

            case 2:
                fp = fopen("carpeta_contactos/contactos.txt", "r");
                if (fp == NULL) {
                    printf("Error al abrir el archivo para leer contactos.\n");
                    return 1;
                }
                mostrarContactos(fp);
                fclose(fp);
                break;

            case 3:
                printf("Ingrese el nombre del contacto a borrar: ");
                fgets(nombreABorrar, sizeof(nombreABorrar), stdin);
                nombreABorrar[strcspn(nombreABorrar, "\n")] = '\0';
                borrarContacto(nombreABorrar);
                break;

            case 4:
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opción no válida.\n");
        }
    } while (opcion != 4);

    return 0;
}
