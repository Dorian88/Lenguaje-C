/*Ejercicio 1:
* Hacer la serie de Fibonacci hasta el termino n introducido
* por teclado
*
* Ejercicio 2:
* Averiguar si un numero es primo
*/

#include <stdio.h>

int main(){
    //Declaracion de variables
    int num1, num2, n, i, fib, n1, j, aux;

    //inicializacion de variables
    i = 3;
    fib = 0;
    printf("Ingrese un numero de terminos para la serie de fibonacci: ");
    scanf("%i", &n);
    printf("\n");
    num1 = 0;
    num2 = 1;
    j = 0;
    aux = 0;

    printf("----------------------EJERCICIO SERIE FIBONACCI----------------------\n");
    while(n < 0){
        printf("Ingresaste un numero negativo.\n");
        printf("Ingrese un numero de terminos para la serie de fibonacci: ");
        scanf("%i", &n);
        printf("\n");
    }

    if(n == 0){
        printf("%i ", num1);
    }else{
        printf("%i %i ", num1, num2);
    }

    while(i <= n){
        fib = num1 + num2;
        printf("%i ", fib);
        num1 = num2;
        num2 = fib;
        i++;
    }

    printf("\n\n");

    printf("----------------------EJERCICIO NUMERO PRIMO----------------------\n");

    printf("Ingrese un numero cualquiera: ");
    scanf("%i", &n1);
    printf("\n");

    for(i = 2; i < n1; i++){
        aux = n1 % i;
        if (aux == 0){
            j = 1;
        }
    }

    if(j == 1){
        printf("%i NO es primo", n1);
    }else{
        printf("%i es primo", n1);
    }
    printf("\n");

    return 0;
}
