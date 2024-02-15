/*Ejercicio 1:
* Calcular el factorial de 2 números con funciones

* Ejercicio 2:
* Comprobar si dos números son primos con funciones*/

#include <stdio.h>

int factorial(int a);
int numeroPrimo(int x);

int main(){
    /*Ejercicio 1:
      Declaracion de variables*/
    printf("------------------------FACTORIAL------------------------\n");

    int num1, num2, fact1, fact2;

    //Inicializacion de variables
    printf("Introduce el primer numero para calcular su factorial: ");
    scanf("%i", &num1);
    printf("Introduce el primer numero para calcular su factorial: ");
    scanf("%i", &num2);
    printf("\n");

    fact1 = factorial(num1);
    fact2 = factorial(num2);

    printf("El factorial del numero %i es %i. \n", num1, fact1);
    printf("El factorial del numero %i es %i. \n\n", num2, fact2);

    /*Ejercicio 2:
      Declaracion de variables*/
    printf("------------------------NUMEROS PRIMOS------------------------\n");

    int num3, num4, prim1, prim2;

    //Inicializacion de variables
    printf("Introduce el primer numero para calcular su factorial: ");
    scanf("%i", &num3);
    printf("Introduce el primer numero para calcular su factorial: ");
    scanf("%i", &num4);
    printf("\n");

    prim1 = numeroPrimo(num3);
    prim2 = numeroPrimo(num4);

    if (prim1 == 0){
        printf("El numero %i NO es primo: \n", num3);
    }else{
        printf("El numero %i es primo: \n", num3);
    }

    if (prim2 == 0){
        printf("El numero %i NO es primo: \n", num4);
    }else{
        printf("El numero %i es primo: \n", num4);
    }

    return 0;
}

int factorial(int a){
    int i, aux;

    aux = 1;

    while(a < 0){
        printf("El numero que ingresaste es menor que cero.\n");
        printf("Introduce un numero positivo para calcular su factorial: ");
        scanf("%i", &a);
        printf("\n");
    }

    for(i = 1; i <= a; i++){
        aux = aux * i;
    }

    return aux;
}

int numeroPrimo(int x){
    int i, j, aux;

    aux = 0;
    j = 0;

    for(i = 2; i < x && j == 0; i++){
        aux = x % i;
        if (aux == 0){
            j = 1;
        }
    }

    return j;
}
