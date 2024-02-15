/*Crear un vector dinamico de 10 elementos aleatorios comprendidos
* entre 0 y 2 y eliminar los numeros repetidos reajustando el vector*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(int *vector, int N);

int main(){
    int i, j, k;
    int L = 10;
    int *vect;

    vect = (int*)malloc(L*sizeof(int));//Malloc: Reserva el espacio de memoria al vector

    if(vect == NULL){
        printf("No se ha podido reservar espacio de memoria\n");
    }else{
        aleatorio(vect, L);

        for(i = 0; i < L; i++){
            j = i + 1;
            while(j < L){
                if(*(vect + i) ==*(vect + j)){
                    for(k = j; k + 1 < L; k++){
                        *(vect + k) = *(vect + k + 1);
                    }
                    L--;
                }else{
                    j++;
                }
            }
        }
        vect = (int*)realloc(vect, L*sizeof(int));//Realloc: Redimensiona el vector conservando sus valores

        if(vect == NULL){
            printf("No se ha podido reservar espacio de memoria.\n");
        }else{
            for(i = 0; i < L; i++){
                printf("%i ", *(vect + i));
            }
            printf("\n");
        }
    }

    return 0;
}

void aleatorio(int *vector, int N){
    int i;
    srand(time(NULL));

    for(i = 0; i < N; i++){
        *(vector + i) = rand() % 3;
        printf("%i ", *(vector + i));
    }
    printf("\n");
}
