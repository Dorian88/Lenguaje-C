/*Programa para calcular el factorial de un numero de manera
* recursiva*/

#include <stdio.h>

int factorial (int fact);

int main(){
    int fact;

    printf("Introduce el numero de que se quiere calcular el factorial: ");
    scanf("%i", &fact);

    fact = factorial(fact);

    printf("El resultado es: %i\n", fact);

    return 0;
}

int factorial (int fact){
    if(fact == 0){
        return 1;
    }else{
        return fact * factorial(fact - 1);
    }
}
