/*Escriba un programa que lea 2 números y muestre por pantalla todos
* los números entre esos números dados
*/

#include <stdio.h>

int main(){
    int i, j, num1, num2;

    printf("Introduce el primer numero: ");
    scanf("%i", &num1);
    printf("Introduce el segundo numero que sea mayor al anterior: ");
    scanf("%i", &num2);
    printf("\n");

    printf("---------USANDO EL CICLO FOR---------\n");
    printf("Los numeros entre %i y %i es: \n", num1, num2);

    for(i = num1 + 1; i < num2; i++){
        printf("%i, ", i);
    }

    printf("\n\n");

    printf("---------USANDO EL CICLO WHILE---------\n");
    i = num1 + 1;

    while(i < num2){
        printf("%i, ", i);
        i++;
    }

    printf("\n");
    return 0;
}
