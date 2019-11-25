//
//  wishList.h
//  ProyectoFP
//
//  Created by Héctor Olivares on 16/11/19.
//  Copyright © 2019 Héctor Olivares. All rights reserved.
//

#include <stdio.h>
FILE * archivowl;
char * nombreArchivo = "WishList.txt";
char sino;
char caracter;

void wishList(){
    
    printf("\n");
    printf("--------------------------------------------------\n");
    printf("\n");
    printf("Seleccione una opcion:\n");
    printf("\n");
    printf("1) Agregar libros \t2) Ver Mi Wish List\n");
    printf("\n");
    printf("\t\t\t\t3) Salir\n");
    printf("\n");
    printf("Seleccion: ");
    scanf("%d", &seleccion);
    fflush(stdin);
    
    switch (seleccion) {
        case 1:
            
                printf("\n");
                printf("\n");
                printf("Ingrese el titulo del libro\n");
                printf("Titulo: ");
                scanf("%s", titulo);
                fflush(stdin);
                printf("\n");
                apTitulo = titulo;
                printf("Ingrese el autor del libro\n");
                printf("Tip: Puedes ingresar el nombre de la siguiente forma: A.Turing\n");
                printf("Autor: ");
                scanf("%s", autor);
                fflush(stdin);
                apAutor = autor;
                printf("\n");
                printf("El libro %s de %s fue agregado a tu Wish List\n", titulo, autor);
                
                archivowl = fopen(nombreArchivo, "a");
                if (archivowl == NULL){
                    perror("Error al abrir el archivo\n");
                    return;
                }
                fprintf(archivowl, "Titulo: %s \n", titulo);
                fprintf(archivowl, "Autor: %s \n", autor);
                fprintf(archivowl, "---------------------\n");
                fclose(archivowl);
                printf("\n");
                printf("--------------------------------------------------\n");
                printf("\n");
            break;
        case 2:
            printf("\n");
            printf("\n");
            printf("\t//Wish List//\n");
            printf("\n");
            
            archivowl = fopen(nombreArchivo, "r");
            if (archivowl == NULL){
                perror("Error al abrir el archivo\n");
                return;
            }
            while (feof(archivowl) == 0) {
                caracter = fgetc(archivowl);
                printf("%c", caracter);
            }
            
            fclose(archivowl);
            printf("\n");
            printf("\n");
            printf("El archivo se ha leido correctamente!\n");
            printf("\n");
            printf("--------------------------------------------------\n");
            printf("\n");
            return;
            break;
        case 3:
            printf("\n");
            printf("--------------------------------------------------\n");
            printf("\n");
            return;
            break;
        default:
            printf("\n");
            printf("\n");
            printf("Opcion incorrecta\n");
            printf("\n");
            printf("\n");
            break;
    }
    return;
}
