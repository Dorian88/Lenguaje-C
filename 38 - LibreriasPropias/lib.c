#include "lib.h"

/*Reservar memoria dinamica para una matriz de longitud MxN y devuelve
* la matriz dinamica*/

int reservar(int filas, int colum){
    int i;
    int **mat;

    mat = (int**)malloc(filas*sizeof(int*));
    if(mat == NULL){
        printf("No se ha podido reservar memoria.\n");
        exit(1);
    }

    for(i = 0; i < filas; i++){
        mat[i] = (int*)malloc(colum*sizeof(int));
        if(mat[i] == NULL){
            printf("No se ha podido reservar memoria.\n");
            exit(1);
        }
    }

    return mat;
}

/*Recibe una matriz dinamica y le introduce una serie de
* valores por telcado*/
void introduce(int filas, int colum, int **mat){
    int i, j;

    for(i = 0; i < filas; i++){
        for(j = 0; j < filas; j++){
            printf("Introduce el valor para el elemento[%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }
}

//Recibe una matriz dinamica y la muestra por pantalla
void muestra(int filas, int colum, int **mat){
    int i, j;

    for(i = 0; i < filas; i++){
        for(j = 0; j < filas; j++){
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }
}
