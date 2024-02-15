/*Crear un formulario de registro*/
#include <stdio.h>

typedef struct{
    char nombre[50];
    char empleo [50];
    int edad;
}registro;

int main(){
    registro form1, form2;

    printf("Llene el formulario 1: \n");
    printf("Introduce tu nombre: ");
    fgets(form1.nombre, 50, stdin);

    printf("Introduce tu empleo: ");
    fflush(stdin);
    fgets(form1.empleo, 50, stdin);

    printf("Introduce tu edad: ");
    scanf("%i", &form1.edad);

    printf("\n");

    printf("Llene el formulario 2: \n");
    printf("Introduce tu nombre: ");
    fflush(stdin);
    fgets(form2.nombre, 50, stdin);

    printf("Introduce tu empleo: ");
    fflush(stdin);
    fgets(form2.empleo, 50, stdin);

    printf("Introduce tu edad: ");
    scanf("%i", &form2.edad);

    printf("Los nombres son: \n");
    printf("El nombre del formulario 1 es: %s \n", form1.nombre);
    printf("El nombre del formulario 2 es: %s \n", form2.nombre);

    printf("El empleo del formulario 1 es: %s \n", form1.empleo);
    printf("El empleo del formulario 2 es: %s \n", form2.empleo);

    printf("La edad del formulario 1 es: %i \n", form1.edad);
    printf("El edad del formulario 2 es: %i \n", form2.edad);

    return 0;
}
