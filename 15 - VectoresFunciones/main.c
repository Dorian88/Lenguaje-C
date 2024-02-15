/*Vectores.
* Ejemplo: Introducir elementos a un vector con una funcion
*
* Ejercicio:
* Ordenar un vector de 10 enteros de menor a mayor mediante
* una funcion*/

#include <stdio.h>

void llenar(int a[]);
void mostrar(int x[]);
void ordenarVector(int b[]);
void mostrar1(int x[]);

int main(){
    int v[2], i;
    int vect[10] = {7, 5, 8, 9, 6, 4, 2, 1, 3, 0};

    printf("--------------EJEMPLO--------------\n");
    llenar(v);
    mostrar(v);

    printf("--------------EJERCICIO--------------\n");

    printf("Los valores del vector son: \n");

    for(i = 0; i < 10; i++){
        printf("%i ", vect[i]);
    }

    ordenarVector(vect);
    mostrar1(vect);
    printf("\n\n");

    return 0;
}

void llenar(int a[]){
    int i;

    for(i = 0; i < 2; i++){
        printf("Introduce valores para llenar el vector. ");
        scanf("%i", &a[i]);
    }
}

void mostrar (int x[]){
    int i;

    printf("Los valores del vector son: ");

    for(i = 0; i < 2; i++){
        printf("%i ", x[i]);
    }
    printf("\n\n");
}

void ordenarVector(int b[]){
    int i, j, aux;

    for(i = 0; i < 10; i++){
        for(j = i; j < 10; j++){
            if (b[i] > b[j]){
                aux = b[i];
                b[i] = b[j];
                b[j] = aux;
            }
        }
    }
}

void mostrar1(int x[]){
    int i;

    printf("\n|n");
    printf("Los valores del vector ordenado son: \n");

    for(i = 0; i < 10; i++){
        printf("%i ", x[i]);
    }
}
