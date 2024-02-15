/*Arrays: Ejemplo

Ejercicio
Darle valor a un vector de 10 enteros y leerlos despues*/

#include <stdio.h>

int main(){
    int v[] = {3, 5, 8, 7, 9};
    int v1[10];
    int i, j, k;

    printf("----------------EJEMPLO DE ARRAYS----------------\n");

    printf("Los valores del vector son:\n");
    for (i = 0; i < 5; i++){
        printf("%i ", v[i]);
    }


    printf("\n\n----------------EJERCICIO DE ARRAYS----------------\n");
    for (j = 0; j < 10; j++){
        printf("Ingrese un valor al vector en la posicion %i ", j);
        scanf("%i", &v1[j]);
    }

    printf("\nLos valores del vector son:\n");

    for (k = 0; k < 10; k++){
        printf("%i ", v1[k]);
    }

    printf("\n");


    return 0;
}
