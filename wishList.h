/* *****************************************************************
* wishList.h
*
* Author: Héctor Olivares
* License: MIT
*
* *****************************************************************/

FILE * archivowl;
char * nombreArchivo = "WishList.txt";
int sino;
char caracter;

void wishList(){
    
    printf("\n");
    printf("--------------------------------------------------\n");
    printf("\n");
    printf("Seleccione una opcion:\n");
    printf("\n");
    printf("[1] Agregar libros \t[2] Ver Mi Wish List\n");
    printf("\n");
    printf("\t\t\t\t[3] Salir\n");
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
                printf("\n");
                printf("¿Desea agregar otro libro?\n");
                printf("Si [1] \tNo [2]\n");
                scanf("%d", &sino);
                fflush(stdin);
                if (sino == 'n') {
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
            printf("\t/// Wish List ///\n");
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
