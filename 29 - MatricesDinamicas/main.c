/*Hacer un programa que copie el contenido de una matriz en otra
* todo de manera dinamica*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int filas, colum, i, j;
    int **m1;
    int **m2;

    printf("Introduce el numero de filas: ");
    scanf("%i", &filas);
    printf("Introduce el numero de columnas: ");
    scanf("%i", &colum);

    m1 = (int**)malloc(filas*sizeof(int*));
    if(m1 == NULL){
        printf("No se ha reservado el espacio de memoria.");
        exit(1);
    }

    for(i = 0; i < filas; i++){
        m1[i] = (int*)malloc(colum*sizeof(int));
        if(m1[i] == NULL){
            printf("No se ha reservado el espacio de memoria.");
            exit(1);
        }
    }

    printf("\nIngresa valores para la primera matriz.\n");

    for(i = 0; i < filas; i++){
        for(j = 0; j < colum; j++){
            scanf("%i", &m1[i][j]);
        }
    }

    m2 = (int**)malloc(filas*sizeof(int*));
    if(m2 == NULL){
        printf("No se ha reservado el espacio de memoria.");
        exit(1);
    }

    for(i = 0; i < filas; i++){
        m2[i] = (int*)malloc(colum*sizeof(int));
        if(m2[i] == NULL){
            printf("No se ha reservado el espacio de memoria.");
            exit(1);
        }
    }

    printf("\nEsta es la segunda matriz despues de copiar de la primera.\n");

    for(i = 0; i < filas; i++){
        for(j = 0; j < colum; j++){
            m2[i][j] = m1[i][j];
            printf("%i ", m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
