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

void mostrarContactos(FILE *fp) {
    struct contacto contactos;
    int encontrado = 0;

    rewind(fp); 

    printf("\nLista de contactos:\n");
    while (fread(&contactos, sizeof(struct contacto), 1, fp)) {
        printf("Nombre: %s\n", contactos.nombre);
        printf("Numero: %lld\n", contactos.numero);
        printf("Direccion: %s\n\n", contactos.direccion);
        encontrado = 1;
    }

    if (!encontrado) {
        printf("No hay contactos guardados.\n");
    }
}

void borrarContacto(const char *nombreABorrar) {
    FILE *fp, *temp;
    struct contacto contactos;
    int encontrado = 0;

    fp = fopen("carpeta_contactos/contactoscrear.bin", "wb");
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

int main() {
    FILE *fp;
    int opcion;
    char nombreABorrar[20];

    do {
        printf("\n1. Agregar contacto\n2. Mostrar contactos\n3. Borrar contacto\n4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        getchar();

        switch (opcion) {
            case 1:
                fp = fopen("carpeta_contactos/contactoscrear.bin", "ab");
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
                printf("Ingrese el nombre del contacto a borrar: ");
                fgets(nombreABorrar, sizeof(nombreABorrar), stdin);
                nombreABorrar[strcspn(nombreABorrar, "\n")] = '\0';
                borrarContacto(nombreABorrar);
                break;

            case 4:
                printf("Saliendo del programa.\n");
                printf("Gracias por usarlo, vuelva pronto.\n");
                return 0;

            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 4);

    return 0;
}
