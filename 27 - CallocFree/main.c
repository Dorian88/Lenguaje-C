/*Hacer un vector con 100 enteros que esten comprendidos entre 0 y 2
* y contar con un vector dinamico cuantas veces aparecen cada
* numero.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(int vector[], int tam);

int main(){
    int N = 3, i, op;
    int vect[100];
    int *contador;

    contador = (int*)calloc(N, sizeof(int));//Calloc: Reserva espacio de memoria e inicializa el vector
    if(contador == NULL){
        printf("No se ha podido reservar espacio de memoria\n");
    }else{
        aleatorio(vect, 100);
        for(i = 0; i < 100; i++){
            op = vect[i];
            *(contador + op) += 1;
        }

        for(i = 0; i < N; i++){
            printf("%i ", *(contador + i));
        }
    }

    free(contador);//Liberar la memoria dinamica utilizada

    return 0;
}

void aleatorio(int vector[], int tam){
    int i;
    srand(time(NULL));

    for(i = 0; i < tam; i++){
        vector[i] = rand() % 3;
    }
    printf("\n");
}
