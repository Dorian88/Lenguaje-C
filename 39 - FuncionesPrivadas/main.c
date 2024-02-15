//Funciones privadas

#include <stdio.h>
#include "graficos.h"

int main(){
    int opcion;

    do{
        printf("Introduce una opcion:\n");
        printf("1. Haremos uso de DirectX.\n");
        printf("2. Haremos uso de OpenGL.\n\n");
        scanf("%i", &opcion);
        printf("\n");
    }while(opcion < 1 || opcion > 2);

    graf(opcion);

    return 0;
}
