/* *****************************************************************
* readBooks.h
*
* Author: Héctor Olivares
* License: MIT
*
* *****************************************************************/

FILE * archivoll;
char * nombrell = "LibrosLeidos.txt";
FILE * archivonl;
char * nombrenl = "NumeroLibros.txt";
int seleccion, sino;
int opcion;
char caracter;
char titulo[100], autor[100], *apTitulo, *apAutor;
int b;

void readBooks(){
    
    printf("\n");
    printf("--------------------------------------------------\n");
    printf("\n");
    printf("Seleccione una opcion:\n");
    printf("\n");
    printf("[1] Termine un libro! \t[2] Ver mis libros leidos\n");
    printf("\n");
    printf("\t[3] Numero de libros leidos \t[4] Salir\n");
    printf("\n");
    printf("Seleccion: ");
    scanf("%d", &seleccion);
    fflush(stdin);
    
    switch (seleccion) {
        case 1:
            
            while (opcion !=5) {
                printf("\n");
                printf("Felicidades!");
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
                printf("\n");
                printf("¿Desea agregar otro libro?\n");
                printf("Si [1] \tNo [2]\n");
                scanf("%d", &sino);
                fflush(stdin);
                if (sino == 2) {
                    printf("\n");
                    printf("--------------------------------------------------\n");
                    printf("\n");
                    return;
                }
                
            }
            break;
        case 2:
            printf("\n");
            printf("\n");
            printf("\t/// Mi Biblioteca ///\n");
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
