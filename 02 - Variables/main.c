//Uso de variables

#include <stdio.h>

int main(){
    //Declaracion de variables
    int x; //Variable de tipo entero. 16 bits (2^16)
    float y; //Variable de tipo flotante. 32 bits (2^32)
    double y2; //Variable de tipo doble flotante. 64 bits (2^64)
    char z; //Variavble de tipo caracter.

    //Inicialización variables
    x = 5;
    y = 10.5;
    y2 = 20.9;
    z = 'a'; /*para asignar valores a variables de tipo char
               se usa la comilla simple*/

    //Mostrar el valor de las variables por pantalla
    printf ("El valor de x (Tipo entero): %i.\n", x);
    printf ("El valor de y (Tipo flotante): %f.\n", y);
    printf ("El valor de y2 (Tipo doble): %f.\n", y2);
    printf ("El valor de z (Tipo caracter): %c.\n", z);
    return 0;
}
