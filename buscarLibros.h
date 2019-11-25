//
//  buscarLibros.h
//  ProyectoFP
//
//  Created by Héctor Olivares on 16/11/19.
//  Copyright © 2019 Héctor Olivares. All rights reserved.
//

#include <stdio.h>

struct libros{
    char titulo2[100], autor2[100];
}est;

int cont = 0;

void buscarLibros(){
    
    printf("Titulo: ");
    gets(est.titulo2);
    
    printf("Autor: ");
    gets(est.autor2);
    
    FILE * ptr;
    
    ptr = fopen("MiBiblioteca2.txt", "a+");
    if (ptr == NULL) {
        printf("Error");
        return;
    }
    
    /*while (!feof(archivoal)) {
        fread(&est, sizeof(est), 1, archivoal);
        
        if (strstr(autor, apAutor) !=NULL) {
            printf("Los libros encontrados fueron:\n");
            printf("Titulo: %s", est.apTitulo);
            printf("Autor: %s", est.apAutor);
        }
    return;
    }*/
    
    
    
}






/*int seleccion;
int opcion;
//char titulo[100], autor[100], *apTitulo, *apAutor;

void buscarLibros(){
    
    printf("\n");
    printf("\n");
    printf("Selecciona tu metodo de busqueda:\n");
    printf("1) Autor \t2) Titulo\n");
    printf("Seleccion: ");
    fflush(stdin);
    scanf("%d", &seleccion);
    
        switch (seleccion) {
            case 1:
                printf("\n");
                printf("Ingrese el autor del libro\n");
                printf("Nota: Ingrese en nombre del autor de la siguiente forma: A.Turing\n");
                printf("Autor: ");
                fflush(stdin);
                scanf("%[^\n]", &autor);
                apAutor = &autor;
                printf("Se han encontrado estos libros del autor %s:\n", autor);
                printf("\n");
                printf("\n");
                break;
            case 2:
                printf("\n");
                printf("Ingrese el titulo del libro\n");
                printf("Titulo: ");
                fflush(stdin);
                scanf("%[^\n]", &titulo);
                printf("\n");
                apTitulo = &titulo;
                printf("Se han encontrado estos libros con el titulo %s:\n", titulo);
                printf("\n");
                printf("\n");
                break;
            default:
                printf("Opcion incorrecta\n");
                break;
        }
}*/
