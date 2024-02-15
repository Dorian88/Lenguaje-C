/*Escriba un programa que lea 2 números y muestre por pantalla todos
* los números entre esos números dados
*/

#include <stdio.h>

int main(){
    int i, j, num1, num2;

    printf("Introduce el primer numero: ");
    scanf("%i", &num1);

    do{
        printf("Introduce el segundo numero que sea mayor al anterior: ");
        scanf("%i", &num2);
        //printf("\n");
    }while(num2 < num1);

    printf("\nLos numeros entre %i y %i es: \n", num1, num2);

    for(i = num1 + 1; i < num2; i++){
        printf("%i, ", i);
    }

    printf("\n");

    return 0;
}
