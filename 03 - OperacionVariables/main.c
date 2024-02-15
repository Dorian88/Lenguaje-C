//Operaciones con variables

#include <stdio.h>
#include <math.h>

#define PI 3.1416
int main(){
    float x, r1, r2, r3, r4;
    int y, z, i, d, r5, r6, r7, r8, r9;

    //Asignacion de valores
    x = PI;
    printf("Introduce un valor: ");
    scanf("%i", &y); //Ingresar valores por teclado
    z = 2;
    i = 3;
    d = 4;
    r8 = 0;
    r9 = 0;

    printf("El valor de PI es: %f \n", x);
    printf("El valor que ingresaste es: %i \n", y);
    printf("El valor original de i es: %i \n", i);
    printf("El valor original de d es: %i \n", d);

    //Operaciones básicas
    r1 = x + y; //Suma
    r2 = x - y; //Resta
    r3 = x * y; //Multiplicación
    r4 = x / y; //División

    //Otras operaciones
    r5 = y % z; //Modulo: Muestra el residuo de la división
    r6 = pow(y, z); //Potenciación
    r7 = sqrt(y); //Raiz cuadrada

    //Operaciones incremento y decremento
    i++;
    d--;

    //Mostrar los resultados de las operaciones
    printf("El resultado de la suma x + y es: %f \n", r1);
    printf("El resultado de la resta x - y es: %f \n", r2);
    printf("El resultado de la multiplicacion x * y es: %f \n", r3);
    printf("El resultado de la division x / y es: %f \n", r4);
    printf("El residuo de la division 'y' y z es: %i \n", r5);
    printf("El resultado de la potenciacion entre 'y' y z es: %i \n", r6);
    printf("El resultado de la raiz cuadrada de y es: %i \n", r7);
    printf("El valor despues de aplicar el incremento i++ es: %i \n", i);
    printf("El valor despues de aplicar el decremento d-- es: %i \n", d);
    return 0;
}
