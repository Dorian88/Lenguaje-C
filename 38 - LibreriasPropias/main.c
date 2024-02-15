//Librerias propias
#include <stdio.h>
#include "lib.h"

int main(){
    int **mat;

    mat = reservar(2, 2);
    introduce(2, 2, mat);
    muestra(2, 2, mat);
    return 0;
}
