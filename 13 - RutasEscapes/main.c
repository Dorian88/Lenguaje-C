//Imprimir todos los numeros primos entre 2 y 2000

#include <stdio.h>

int main(){
    //Declaracion de variables
    int i, j, k, aux;

    for(i = 2; i < 2000; i++){
        k = 0;
        for(j = 2; j < i && k != 1; j++){
            if(aux == 0){
                k = 1;
            }
        }
        if(k != 1){
            printf("%i ", i);
        }
    }

    printf("\n");
    return 0;
}
