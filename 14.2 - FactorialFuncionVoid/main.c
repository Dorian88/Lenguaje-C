//Factorial con funcion void

#include <stdio.h>

void factorial();

int main(){

    factorial();

    return 0;
}

void factorial(){
    //Declaracion de variables
    int i, num, fact;

    //Inicializacion de variables
    fact = 1;
    printf("Introduce un numero positivo para calcular su factorial: ");
    scanf("%i", &num);
    printf("\n");

    while(num < 0){
        printf("El numero que ingresaste es menor que cero.\n");
        printf("Introduce un numero positivo para calcular su factorial: ");
        scanf("%i", &num);
        printf("\n");
    }

    for(i = 1; i <= num; i++){
        fact = fact * i;
    }

    printf("El factorial de %i es %i: \n", num, fact);
}
