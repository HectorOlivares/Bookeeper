//
//  librosLeidos.h
//  ProyectoFP
//
//  Created by Héctor Olivares on 16/11/19.
//  Copyright © 2019 Héctor Olivares. All rights reserved.
//

#include <stdio.h>

FILE * archivoll;
char * nombrell = "LibrosLeidos.txt";
FILE * archivonl;
char * nombrenl = "NumeroLibros.txt";
char sino;
int seleccion;
int opcion;
char caracter;
char titulo[100], autor[100], *apTitulo, *apAutor, sino;
int b;

void librosLeidos(){
    
    printf("\n");
    printf("--------------------------------------------------\n");
    printf("\n");
    printf("Seleccione una opcion:\n");
    printf("\n");
    printf("1) Termine un libro! \t2) Ver mis libros leidos\n");
    printf("\n");
    printf("\t3) Numero de libros leidos \t4) Salir\n");
    printf("\n");
    printf("Seleccion: ");
    scanf("%d", &seleccion);
    fflush(stdin);
    
    switch (seleccion) {
        case 1:
    
                printf("\n");
                printf("Felicidades!");
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
                printf("Haz terminado de leer el libro %s de %s\n", titulo, autor);
                
                b++;
                
                archivonl = fopen("NumeroLibros.txt", "w+");
                if (archivonl == NULL){
                    perror("Error al abrir el archivo\n");
                    return;
                }
                fprintf(archivonl, "Haz leido en total %d libros\n", b);
                printf("\n");
                fclose(archivonl);
                
                
                archivoll = fopen(nombrell, "a");
                if (archivoll == NULL){
                    perror("Error al abrir el archivo\n");
                    return;
                }
                fprintf(archivoll, "Titulo: %s \n", titulo);
                fprintf(archivoll, "Autor: %s \n", autor);
                fprintf(archivoll, "---------------------\n");
                fclose(archivoll);
                printf("\n");
                printf("--------------------------------------------------\n");
                printf("\n");
                
            break;
        case 2:
            printf("\n");
            printf("\n");
            printf("\t//Libros Leidos//\n");
            printf("\n");
            
            archivoll = fopen(nombrell, "r");
            if (archivoll == NULL){
                perror("Error al abrir el archivo\n");
                return;
            }
            while (feof(archivoll) == 0) {
                caracter = fgetc(archivoll);
                printf("%c", caracter);
            }
            
            fclose(archivoll);
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
            printf("\n");
            archivonl = fopen(nombrenl, "r");
            if (archivonl == NULL){
                perror("Error al abrir el archivo\n");
                return;
            }
            while (feof(archivonl) == 0) {
                caracter = fgetc(archivonl);
                printf("%c", caracter);
            }
            printf("\n");
            printf("--------------------------------------------------\n");
            printf("\n");
            break;
        case 4:
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
