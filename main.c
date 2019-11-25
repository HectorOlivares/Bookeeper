//
//  main.c
//  ProyectoFP
//
//  Created by Héctor Olivares on 03/11/19.
//  Copyright © 2019 Héctor Olivares. All rights reserved.
//

#include <stdio.h>
#include "agregarLibros.h"
#include "librosLeidos.h"
#include "wishList.h"
#include "despedida.h"
#include "confi.h"

int opcion = 1;
int seleccion = 0;
char titulo[100], autor[100], *apTitulo, *apAutor, sino;
int i = 0;


int main() {
    
    while (opcion) {
        printf("\t\t\t//Bookeeper//\n");
        printf("\n");
        printf("\n");
        printf("\t\tBienvenido a Bookeeper\n");
        printf("\tPor favor, selecciona una opción:\n");
        printf("\n");
        printf("\n");
        printf("\t1) Mi biblioteca \t2) Libros leidos\n");
        printf("\n");
        printf("3) Wish List \t4) Salir \t5) Configuracion\n");
        printf("\n");
        printf("\n");
        printf("Tu seleccion: ");
        fflush(stdin);
        scanf("%d", &seleccion);
        
        switch (seleccion) {
            case 1:
                agregarLibros();
                break;
            case 2:
                librosLeidos();
                break;
            case 3:
                wishList();
                break;
            case 4:
                printf("\n");
                despedida();
                printf("//// Bookeeper ////\n");
                printf("\tHasta luego!\n");
                printf("\n");
                printf("\n");
                opcion = 0;
                break;
            case 5:
                confi();
                break;
            default:
                printf("Opción Incorrenta\n");
                printf("\n");
                break;
        }
        
    }
    return 0;
}
