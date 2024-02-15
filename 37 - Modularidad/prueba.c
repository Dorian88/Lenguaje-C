#include "prueba.h"

static void privada(int *x){
    *x += 10;
}

void prueba (int *x){
    *x += 5;
    privada(x);
}
