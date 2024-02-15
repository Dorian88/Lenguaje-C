//Introduccion a la modularidad

#include <stdio.h>
#include "prueba.h"

int main(){
    int x = 0;

    prueba(&x);
    //privada(&x);

    printf("El valor de x es: %i.\n", x);

    return 0;
}
