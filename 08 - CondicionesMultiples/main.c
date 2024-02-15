/*Hacer un programa que diga si un número insertado se encuentra
* o no entre 1 y 10.
*/

#include <stdio.h>

int main(){
    printf("Operadores de comparacion:\n");
    printf("1. && representa y (Todas las condiciones se debe cumplir)\n");
    printf("2. || representa o (Al menos una de las condiciones se debe cumplir)\n\n");


    int num;

    printf("Ingrese un numero: ");
    scanf("%i", &num);
    printf("\n");

    if (num >= 1 && num <=10){
        printf("El numero %i esta entre 1 y 10.\n", num);
    }else{
        printf("El numero %i NO esta entre 1 y 10.\n", num);
    }
    return 0;
}
