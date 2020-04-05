//
//  agregarLibros.h
//  ProyectoFP
//
//  Created by Héctor Olivares on 16/11/19.
//  Copyright © 2019 Héctor Olivares. All rights reserved.
//

FILE * archivoal;
char * nombreal = "MiBiblioteca.txt";
FILE * archivogt;
char * nombregt = "GastoTotal.txt";
int seleccion, opcion, sino;
float lYear, lYearRes;
char caracter;
char titulo[100], autor[100], *apTitulo, *apAutor;

float promedio(float a, float b);

void agregarLibros(){
    
    printf("\n");
    printf("--------------------------------------------------\n");
    printf("\n");
    printf("Seleccione una opcion:\n");
    printf("\n");
    printf("[1] Agregar libros \t[2] Ver Mi Biblioteca\n");
    printf("\n");
    printf("\t[3] Promedio de lectura \t\t[4] Salir\n");
    printf("\n");
    printf("Seleccion: ");
    scanf("%d", &seleccion);
    fflush(stdin);
    
    switch (seleccion) {
        case 1:
            
            while (opcion !=5) {
                printf("\n");
                printf("\n");
                printf("Ingrese el titulo del libro\n");
                printf("Titulo: ");
                scanf("%[^\n]", titulo);
                fflush(stdin);
                printf("\n");
                apTitulo = titulo;
                printf("Ingrese el autor del libro\n");
                printf("Tip: Puedes ingresar el nombre de la siguiente forma: A.Turing\n");
                printf("Autor: ");
                scanf("%[^\n]", autor);
                fflush(stdin);
                printf("\n");
                apAutor = autor;
                printf("\n");
                printf("\n");
                printf("El libro %s de %s fue agregado a tu biblioteca\n", titulo, autor);
                
                
                archivoal = fopen(nombreal, "a");
                if (archivoal == NULL){
                    perror("Error al abrir el archivo\n");
                    return;
                }
                fprintf(archivoal, "Titulo: %s \n", titulo);
                fprintf(archivoal, "Autor: %s \n", autor);
                fprintf(archivoal, "---------------------\n");
                fclose(archivoal);
                
                printf("\n");
                printf("\n");
                printf("¿Desea agregar otro libro?\n");
                printf("Si [1] \tNo [2]\n");
                scanf("%d", &sino);
                fflush(stdin);
                if (sino == 2) {
                    printf("\n");
                    printf("--------------------------------------------------\n");
                    printf("\n");
                    opcion = 5;
                    return;
                }
                
            }
            break;
        case 2:
            printf("\n");
            printf("\n");
            printf("\t/// Mi Biblioteca ///\n");
            printf("\n");
            
            archivoal = fopen(nombreal, "r");
            if (archivoal == NULL){
                perror("Error al abrir el archivo\n");
                return;
            }
            while (feof(archivoal) == 0) {
                caracter = fgetc(archivoal);
                printf("%c", caracter);
            }
            
            fclose(archivoal);
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
            printf("Ingrese cuantos libros ha leido este año:\n");
            printf("No. Libros: ");
            scanf("%f", &lYear);
            fflush(stdin);
            printf("\n");
            lYearRes = promedio(lYear, 12);
            printf("Haz leido al mes: %.1f libros\n", lYearRes);
            printf("\n");
            printf("Presiona [enter] para continuar");
            getchar();
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

float promedio(float a, float b){
    return a / b;
}
