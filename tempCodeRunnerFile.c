#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_PATH "carpeta_contactos/contactoscrear.bin"

struct contacto {
    char nombre[20];
    long long int numero;
    char direccion[20];
};

FILE* abrirArchivo(const char* modo) {
    FILE* fp = fopen(FILE_PATH, modo);
    if (fp == NULL) {
        printf("Error al abrir el archivo.\n");
    }
    return fp;
}

void agregarContacto() {
    FILE* fp = abrirArchivo("ab+");
    if (!fp) return;

    struct contacto c;
    printf("Ingrese nombre: ");
    fgets(c.nombre, sizeof(c.nombre), stdin);
    c.nombre[strcspn(c.nombre, "\n")] = '\0';

    printf("Ingrese numero: ");
    scanf("%lld", &c.numero);
    getchar();

    printf("Ingrese direccion: ");
    fgets(c.direccion, sizeof(c.direccion), stdin);
    c.direccion[strcspn(c.direccion, "\n")] = '\0';

    fwrite(&c, sizeof(c), 1, fp);
    fclose(fp);
    printf("Contacto agregado con exito.\n");
}

void mostrarContactos() {
    FILE* fp = abrirArchivo("rb");
    if (!fp) return;

    struct contacto contactos[100];
    int count = 0;

    while (fread(&contactos[count], sizeof(struct contacto), 1, fp)) {
        count++;
    }
    fclose(fp);

    if (count == 0) {
        printf("No hay contactos guardados.\n");
        return;
    }

    qsort(contactos, count, sizeof(struct contacto), 
          (int (*)(const void*, const void*)) strcmp);

    printf("\nLista de contactos (ordenados):\n");
    for (int i = 0; i < count; i++) {
        printf("Nombre: %s\nNumero: %lld\nDireccion: %s\n\n",
               contactos[i].nombre, contactos[i].numero, contactos[i].direccion);
    }
}

void borrarContacto() {
    FILE* fp = abrirArchivo("rb");
    if (!fp) return;

    char nombreABorrar[20];
    struct contacto c;
    int encontrado = 0;

    printf("Ingrese el nombre del contacto a borrar: ");
    fgets(nombreABorrar, sizeof(nombreABorrar), stdin);
    nombreABorrar[strcspn(nombreABorrar, "\n")] = '\0';

    FILE* temp = fopen("carpeta_contactos/temp.bin", "wb");
    if (!temp) {
        fclose(fp);
        printf("Error al abrir archivo temporal.\n");
        return;
    }

    while (fread(&c, sizeof(c), 1, fp)) {
        if (strcmp(c.nombre, nombreABorrar) != 0) {
            fwrite(&c, sizeof(c), 1, temp);
        } else {
            encontrado = 1;
        }
    }

    fclose(fp);
    fclose(temp);
    remove(FILE_PATH);
    rename("carpeta_contactos/temp.bin", FILE_PATH);

    printf(encontrado ? "Contacto eliminado con exito.\n" : "Contacto no encontrado.\n");
}

void modificarContacto() {
    FILE* fp = abrirArchivo("rb+");
    if (!fp) return;

    char nombreABuscar[20];
    struct contacto c;
    int encontrado = 0;

    printf("Ingrese el nombre del contacto a modificar: ");
    fgets(nombreABuscar, sizeof(nombreABuscar), stdin);
    nombreABuscar[strcspn(nombreABuscar, "\n")] = '\0';

    while (fread(&c, sizeof(c), 1, fp)) {
        if (strcmp(c.nombre, nombreABuscar) == 0) {
            encontrado = 1;
            fseek(fp, -sizeof(c), SEEK_CUR);

            printf("Ingrese el nuevo numero: ");
            scanf("%lld", &c.numero);
            getchar();

            printf("Ingrese la nueva direccion: ");
            fgets(c.direccion, sizeof(c.direccion), stdin);
            c.direccion[strcspn(c.direccion, "\n")] = '\0';

            fwrite(&c, sizeof(c), 1, fp);
            printf("Contacto modificado con exito.\n");
            break;
        }
    }

    if (!encontrado) {
        printf("Contacto no encontrado.\n");
    }
    fclose(fp);
}

int main() {
    int opcion;

    do {
        printf("\n1. Agregar contacto\n2. Mostrar contactos\n3. Borrar contacto\n4. Modificar contacto\n5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        getchar();

        switch (opcion) {
            case 1: agregarContacto(); break;
            case 2: mostrarContactos(); break;
            case 3: borrarContacto(); break;
            case 4: modificarContacto(); break;
            case 5: printf("Saliendo del programa.\n"); break;
            default: printf("Opcion no valida.\n");
        }
    } while (opcion != 5);

    return 0;
}
