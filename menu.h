/* *****************************************************************
* menu.h
*
* Author: Héctor Olivares
* License: MIT
*
* *****************************************************************/

#include <stdio.h>
#include "addBooks.h"
#include "readBooks.h"
#include "wishList.h"
#include "settings.h"

int opcion = 1;
int seleccion = 0;
char titulo[100], autor[100], *apTitulo, *apAutor;
int i = 0;

void menu(){
    
    while (opcion) {
        printf("\n");
        printf("\t\t  ********************  \n");
        printf("\t\t  **                **  \n");
        printf("\t\t  **    Bookshelf   **  \n");
        printf("\t\t  **                **  \n");
        printf("\t\t  ********************  \n");
        printf("\n");
        printf("\n");
        printf("\t\tBienvenido a Bookshelf\n");
        printf("\tPor favor, selecciona una opción:\n");
        printf("\n");
        printf("\n");
        printf("\t[1] Mi biblioteca \t[2] Libros leidos\n");
        printf("\n");
        printf("[3] Wish List \t[4] Salir \t[5] Configuracion\n");
        printf("\n");
        printf("\n");
        printf("Tu seleccion: ");
        fflush(stdin);
        scanf("%d", &seleccion);
        
        switch (seleccion) {
            case 1:
                addBooks();
            break;
            case 2:
                readBooks();
            break;
            case 3:
                wishList();
            break;
            case 4:
                printf("\n");
                printf("Hasta luego!\n");
                printf("\n");
                printf("\n");
                opcion = 0;
            break;
            case 5:
                settings();
            break;
            default:
                printf("\n");
                printf("(!) Opción no valida\n");
                printf("\n");
                printf("--------------------------------------------------\n");
                printf("\n");
                printf("\n");
            break;
        }
            
    }
    
}
