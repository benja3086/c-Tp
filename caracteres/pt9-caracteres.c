#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;

    char org[1000];
    printf("Ingrese la palabra que deseas en mayusculas: ");
    fgets(org, 1000, stdin);

    int len = strlen(org);
    if (org[len - 1] == '\n')
    {
        org[len - 1] = '\0';
        len--;
    }

    printf("esta es la palabra es minusculas:%s\n", org);

    for (i = 0; i < strlen(org); i++)
    {
        switch (org[i])
        {
        case 'b':
            org[i] = toupper(org[i]);
            break;
        case 'c':
            org[i] = toupper(org[i]);
            break;
        case 'd':
            org[i] = toupper(org[i]);
            break;
        case 'f':
            org[i] = toupper(org[i]);
            break;
        case 'h':
            org[i] = toupper(org[i]);
            break;
        case 'j':
            org[i] = toupper(org[i]);
            break;
        case 'k':
            org[i] = toupper(org[i]);
            break;
        case 'l':
            org[i] = toupper(org[i]);
            break;
        case 'm':
            org[i] = toupper(org[i]);
            break;
        case 'n':
            org[i] = toupper(org[i]);
            break;
        case 'p':
            org[i] = toupper(org[i]);
            break;
        case 'q':
            org[i] = toupper(org[i]);
            break;
        case 'r':
            org[i] = toupper(org[i]);
            break;
        case 's':
            org[i] = toupper(org[i]);
            break;
            break;
        case 't':
            org[i] = toupper(org[i]);
            break;
        case 'v':
            org[i] = toupper(org[i]);
            break;
        case 'w':
            org[i] = toupper(org[i]);
            break;
        case 'x':
            org[i] = toupper(org[i]);
            break;
            break;
        case 'y':
            org[i] = toupper(org[i]);
            break;
        case 'z':
            org[i] = toupper(org[i]);
            break;
        }
    }
    printf("esta es la palabra modificada:%s\n", org);
    return 0;
}