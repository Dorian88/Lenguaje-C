/*Ejemplo 1.
* Realizar un programa que lea por teclado un numero entero positivo
* y escriba en pantalla si es par o impar.
*
* Ejemplo 2.
* Realizar un programa que lea tres números enteros positivos distintos
* e imprima el mayor y el menor valor de los tres. Intente que el programa
* realice el menor numero de comparaciones posibles emtre los numeros.
*/
#include <stdio.h>

int main(){
    //Declaración de variables
    int num, num1, num2, num3, res, max, min;

    //Inicializacion de variables
    printf("Ingrese un numero positivo: ");
    scanf("%i", &num);
    printf("\n");

    printf("Ingrese un numero positivo: ");
    scanf("%i", &num1);
    printf("\n");

    printf("Ingrese un numero positivo: ");
    scanf("%i", &num2);
    printf("\n");

    printf("Ingrese un numero positivo: ");
    scanf("%i", &num3);
    printf("\n");

    //Ejemplo 1
    printf("1. Verificar si un numero es par o impar\n");

    res = num % 2;

    if(res == 0){
        printf("El numero %i es par. \n\n", num);
    }else{
        printf("El numero %i es impar. \n\n", num);
    }

    //Ejemplo 2
    printf("2. Buscar el valor mayor y menor de tres numeros\n");

    if(num1 > num2){
        if(num1 > num3){
            max = num1;
        }else{
            max = num3;
        }
    }else{
        if(num2 > num3){
            max = num2;
        }else{
            max = num3;
        }
    }

    if(num1 < num2){
        if(num1 < num3){
            min = num1;
        }else{
            min = num3;
        }
    }else{
        if(num2 < num3){
            min = num2;
        }else{
            min = num3;
        }
    }

    printf("El mayor numero de todos es: %i\n", max);
    printf("El menor numero de todos es: %i\n", min);

    return 0;
}
