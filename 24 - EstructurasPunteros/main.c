/*Realizar un programa para almacenar las notas de un alumno
* de ñas asignaturas de un semestre*/

#include <stdio.h>

typedef struct{
    int matematicas;
    int ingles;
    int fisica;
}notas;

void darnotas(notas *not);

int main(){
    notas not;
    darnotas(&not);

    printf("LOS RESULTADOS AFUERA DE LA FUNCION.\n");

    printf("La nota de matematicas es: %i \n", not.matematicas);
    printf("La nota de ingles es: %i \n", not.ingles);
    printf("La nota de fisica es: %i \n", not.fisica);

    return 0;
}

void darnotas(notas *not){
    printf("Introduzca la nota de matematicas: ");
    scanf("%i", &not->matematicas);
    printf("Introduzca la nota de ingles: ");
    scanf("%i", &not->ingles);
    printf("Introduzca la nota de fisica: ");
    scanf("%i", &not->fisica);
    printf("\n");

    printf("LOS RESULTADOS DENTRO DE LA FUNCION.\n");
    printf("La nota de matematicas es: %i \n", (*not).matematicas);
    printf("La nota de ingles es: %i \n", not->ingles);
    printf("La nota de fisica es: %i \n", not->fisica);
    printf("\n");
}
