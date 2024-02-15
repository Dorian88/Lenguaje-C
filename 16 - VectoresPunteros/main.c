/*Ejemplo:
* Introducir valores numericos en un vector mediante punteros
*
* Ejercicio:
* Calcular las probabilidaes de que salgan cada uno de los numeros
  de un dado con un vector usando punteros. Calcular con 10000 iteraciones
*/

#include <stdio.h>

void ingresar(int *vec);
void leer(int *vec);
void sorteo(int *v);
void leer1(int *vec);

int main(){
    int vec[3];
    int vect [] = {0, 0, 0, 0, 0, 0};

    printf("-----------------EJEMPLO-----------------\n");
    ingresar(vec);

    printf("\nEl vector que ingresaste fue:\n");
    leer(vec);

    printf("\n\n");
    printf("-----------------EJERCICIO-----------------\n");

    sorteo(vect);
    leer1(vect);

    return 0;
}

void ingresar(int *vec){
    int i;

    for(i = 0; i < 3; i++){
        printf("Introduce un valor para la posicion %i: ", i + 1);
        scanf("%i", (vec + i));
    }
}

void leer(int *vec){
    int i;

    for(i = 0; i < 3; i++){
        printf("%i ", *(vec + i));
    }
}

void sorteo(int *v){
    srand (time(NULL));
    int i, aux;

    for(i = 0; i < 10000; i++){
        aux = rand() % 6;

        switch(aux){
            case 0:{
                *(v + aux) += 1;
                break;
            }

            case 1:{
                *(v + aux) += 1;
                break;
            }

            case 2:{
                *(v + aux) += 1;
                break;
            }

            case 3:{
                *(v + aux) += 1;
                break;
            }

            case 4:{
                *(v + aux) += 1;
                break;
            }

            case 5:{
                *(v + aux) += 1;
                break;
            }
        }
    }
}

void leer1(int *vec){
    int i;
    float prob;

    for(i = 0; i < 6; i++){
        prob = (*(vec + i) * 100 /10000.);
        printf("La probabilidad de que el numero %i  salga es de: %f\n", (i + 1), prob);
    }
}
