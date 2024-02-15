/*Ejericio 1:
* Realiza un programa que imprima la suma de los números pares
* entre dos y mil
*
* Ejercicio 2:
* Realiza un programa que calcule la media de x números introducidos
* por teclado
*/

#include <stdio.h>

int main(){
    printf("Solucion del ejericio 1: suma de los numeros pares entre 2 y mil.\n");
    printf("Usando el ciclo for\n");

    //Declaracion de variables
    int con, suma;

    //Inicializacion de variables
    suma = 0;

    for(con = 2; con <= 1000; con += 2){
        suma += con;
    }

    printf("El resultado de la suma es: %i.\n", suma);
    printf("\n\n");

    printf("Solucion del ejericio 2: Media de una cantidad de numeros dados.\n");
    printf("Usando el ciclo while\n");

    //Declaracion de variables
    int i, num1, num2, sum;
    float prom;

    //Inicializacion de variables
    i = 0;
    prom = 0,0;
    sum = 0;

    printf("Ingrese la cantidad de numeros para calcular la media: ");
    scanf("%i", &num1);
    printf("\n");

    while(i < num1){
        printf("ingrese el %i numero: ", i+1);
        scanf("%i", &num2);
        sum += num2;
        i++;
    }

    prom = sum / num1;

    printf("El promedio de los datos es: %f.\n", prom);
    printf("\n");
    return 0;
}
