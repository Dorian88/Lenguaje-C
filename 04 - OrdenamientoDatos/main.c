/* Ordenamiento de datos por el metodo burbuja
*
* Intercambiar los valores de dos numeros enteros introducidos
* por teclado
*/

#include <stdio.h>

int main(){
    int val1, val2, aux;

    printf("Introduce un numero cualquiera: ");
    scanf("%i", &val1);
    printf("\n");
    printf("Introduce otro numero: ");
    scanf("%i", &val2);
    printf("\n");

    printf("El Primer valor que introdujiste fue: %i y el segundo fue: %i\n", val1, val2);

    aux = val1;
    val1 = val2;
    val2 = aux;

    printf("Despues de Aplicar el método burbuja para intercambiar los valores quedaron asi:\n");
    printf("El primer valor es: %i\n", val1);
    printf("El segundo valor es: %i\n", val2);
    return 0;
}
