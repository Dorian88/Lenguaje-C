//Memoria Dinamica

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("MEMORIA ESTATICA\n");

    int i, M, L;
    int N = 50;
    int vector[N];

    for(i = 0; i < N; i++){
        vector[i] = i;
    }

    for(i = 0; i < N; i++){
        printf("%i ", vector[i]);
    }
    printf("\n");

    printf("\nMEMORIA PSEUDOESTATICA\n");

    printf("Dame un valor para M: ");
    scanf("%i", &M);

    int vector1[M];

    for(i = 0; i < M; i++){
        vector1[i] = i;
    }

    for(i = 0; i < M; i++){
        printf("%i ", vector1[i]);
    }
    printf("\n\n");

    printf("MEMORIA DINAMICA\n");
    int *vector2;

    printf("Dame un valor para L: ");
    scanf("%i", &L);

    vector2 = (int*)malloc(L*sizeof(int));

    if(vector2 == NULL){
        printf("No se ha podido reservar la memoria.\n");
    }else{
        for(i = 0; i < L; i++){
            *(vector2 + i) = i;
        }

        for(i = 0; i < L; i++){
            printf("%i ", *(vector2 + i));
        }
        printf("\n\n");

        printf("Dame otro valor para L: ");
        scanf("%i", &L);

        vector2 = (int*)malloc(L*sizeof(int));

        if(vector2 == NULL){
            printf("No se ha podido reservar la memoria.\n");
        }else{
            for(i = 0; i < L; i++){
                *(vector2 + i) = i;
            }

            for(i = 0; i < L; i++){
                printf("%i ", *(vector2 + i));
            }
            printf("\n");
        }
    }

    return 0;
}
