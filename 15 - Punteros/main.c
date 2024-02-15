/*Punteros: Ejemplo
*
* Ejercicio:
* Intercambia los valores de dos variables con una funcion
*/

#include <stdio.h>

void cambio(int *c, int *d);

int main(){
    printf("--------------PUNTEROS EJEMPLO--------------\n\n");

    int x, *y, a, b;

    x = 4;
    y = &x;
    a = 5;
    b = 10;

    printf("El valor de *y es %i.\n\n", *y);

    printf("--------------EJERCICIO CON PUNTERO--------------\n\n");
    cambio(&a, &b);

    printf("El valor actual de a es %i y el de b es %i.\n\n", a, b);

    return 0;
}

void cambio(int *c, int *d){
    int aux;

    aux = *c;
    *c = *d;
    *d = aux;
}
