//Hacer las tablas de multiplicar del 1 al 9

#include <stdio.h>

int main(){
    //Declaracion de variables
    int i, j;

    for(i = 1; i <= 9; i++){
        for(j = 1; j <= 10; j++){
            printf("%i x %i = %i.\n", i, j, i*j);
        }

        printf("\n");
    }
    return 0;
}
