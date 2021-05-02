/* *****************************************************************
* settings.h
*
* Author: Héctor Olivares
* License: MIT
*
* *****************************************************************/

int opci,segu;

void settings(){
    
    printf("\n");
    printf("--------------------------------------------------\n");
    printf("\n");
    printf("Seleccione una opcion:\n");
    printf("\n");
    printf("[1] Reset \t[2] Contacto \t[3] Salir\n");
    printf("\n");
    printf("Seleccion: ");
    scanf("%d", &seleccion);
    fflush(stdin);
    
    switch (seleccion) {
        case 1:
            printf("\n");
            printf("\n");
            printf("Que lista desea resetear?\n");
            printf("\n");
            printf("[1] Mi Biblioteca \t[2] Libros leidos \t[3] Wish List \n");
            printf("\n");
            printf("Seleccion: ");
            scanf("%d", &opci);
            fflush(stdin);
            switch (opci) {
                case 1:
                    printf("\n");
                    printf("Estas seguro de eliminar Mi Biblioteca?\n");
                    printf("Si [1] \tNo [2]\n");
                    scanf("%d", &segu);
                    fflush(stdin);
                    if (segu == 1) {
                        printf("\n");
                        printf("Se ha reseteado la lista\n");
                        printf("\n");
                        printf("--------------------------------------------------\n");
                        printf("\n");
                        archivogt = fopen("MiBiblioteca.txt", "w");
                        if (archivogt == NULL){
                            perror("Error al abrir el archivo\n");
                            return;
                            archivogt = fopen("GastoTotal.txt", "w");
                            if (archivogt == NULL){
                                perror("Error al abrir el archivo\n");
                                return;
                            }
                        } else {
                            if (segu == 2) {
                                return;
                            }
                        }
                    }
                    break;
                case 2:
                    printf("\n");
                    printf("Estas seguro de eliminar Libros Leidos?\n");
                    printf("Si [1] \tNo [2]\n");
                    scanf("%d", &segu);
                    fflush(stdin);
                    if (segu == 1) {
                        printf("\n");
                        printf("Se ha reseteado la lista\n");
                        printf("\n");
                        printf("--------------------------------------------------\n");
                        printf("\n");
                        archivoll = fopen("LibrosLeidos.txt", "w");
                        if (archivoll == NULL){
                            perror("Error al abrir el archivo\n");
                            return;
                            archivonl = fopen("NumeroLibros.txt", "w");
                            if (archivonl == NULL){
                                perror("Error al abrir el archivo\n");
                                return;
                            }
                        } else {
                            if (segu == 2) {
                                return;
                            }
                        }
                    }
                    break;
                case 3:
                    printf("\n");
                    printf("Estas seguro de eliminar Wish List?\n");
                    printf("Si [1] \tNo [2]\n");
                    scanf("%d", &segu);
                    fflush(stdin);
                    if (segu == 1) {
                        printf("\n");
                        printf("Se ha reseteado la lista\n");
                        printf("\n");
                        printf("--------------------------------------------------\n");
                        printf("\n");
                        archivowl = fopen("WishList.txt", "w");
                        if (archivowl == NULL){
                            perror("Error al abrir el archivo\n");
                            return;
                        } else {
                            if (segu == 2) {
                                return;
                            }
                        }
                    }
                    break;
                    
                default:
                    printf("\n");
                    printf("\n");
                    printf("Opcion incorrecta\n");
                    printf("\n");
                    printf("\n");
                    break;
            }
            break;
        case 2:
            printf("\n");
            printf("\n");
            printf("Contacto:\n");
            printf("\n");
            printf("GitHub: @hectorolivares\n");
            printf("\n");
            printf("Presiona [enter] para continuar");
            getchar();
            printf("\n");
            printf("\n");
        case 3:
            printf("\n");
            printf("--------------------------------------------------\n");
            printf("\n");
            return;
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
