/*Hacer un ejemplo de batallas por turnos entre un héroe y varios
* malos, los malos se incrementaran en 1cuando un contador del turno
* de la batalla sea par.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int salud;
    int mana;
    int fuerza;
    int magia;
}heroe;

typedef struct{
    int salud;
    int fuerza;
}malo;

heroe yo;
malo *otros;

void introduceYo();
void introduceMalo(int n);
void asingnaMem(int *n);

int main(){
    int op, i, objetivo, pegar;
    int cont = 0;
    int N = 0;
    srand(time(NULL));

    introduceYo();

    asingnaMem(&N);

    do{
        do{
            printf("1. Atacar.\n");
            printf("2. Magia.\n");
            scanf("%i", &op);
        }while(op < 1 || op > 2);

        printf("Elige al malo al que quieres pegar.\n");
        for(i = 0; i < N; i++){
            printf("El malo %i tiene una vida de : %i\n", i, otros[i].salud);
        }
        scanf("%i", &objetivo);

        if(otros[objetivo].salud > 0){
            switch(op){
                case 1:
                    pegar = yo.fuerza;
                    printf("He pegado %i.\n", pegar);
                    otros[objetivo].salud -= pegar;
                    printf("La salud del malo %i es de %i.\n", objetivo, otros[objetivo].salud);
                    break;
                case 2:
                    if(yo.mana > 0){
                        pegar = yo.magia * (rand() % 3);
                        printf("He pegado %i.\n", pegar);
                        otros[objetivo].salud -= pegar;
                        printf("La salud del malo %i es de %i.\n", objetivo, otros[objetivo].salud);

                    }else{
                        printf("No tienes mana!!\n");
                    }
                    break;
            }
        }else{
            printf("Deja a los cadaveres!!\n");
        }

        printf("Turno de los malos\n");
        for(i = 0; i < N; i++){
            if(otros[i].salud > 0){
                pegar = otros[i].fuerza * (rand() % 3);
                printf("El malo %i me  ha pegado %i.\n", i, pegar);
                yo.salud -= pegar;
                printf("Mi salud es de %i.\n", yo.salud);
            }
        }

        if ((cont % 2) == 0){
            otros = (malo*)realloc(otros, (N + 1*sizeof(malo)));
            if(otros == NULL){
                printf("No se ha podido reservar memoria.\n");
                exit(1);
            }

            introduceMalo(N);
            N++;
        }
        cont++;
    }while(yo.salud > 0);

    return 0;
}

void introduceYo(){
    yo.salud = 1000;
    yo.mana = 100;
    yo.fuerza = 50;
    yo.magia = 100;
}

void introduceMalo(int n){
    otros[n].salud = 100;
    otros[n].fuerza = 50;
}

void asingnaMem(int *n){
    otros = (malo*)malloc((*n + 1)*sizeof(malo));
    if(otros == NULL){
        printf("No se ha podido reservar memoria.\n");
        exit(1);
    }

    introduceMalo(*n);
    (*n)++;
}
