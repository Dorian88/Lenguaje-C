/*Realice un programa que lea un numero entre 1 y 4 y devuelva
* el día de la semana correspondiente. Para 1 lunes, 2 martes, etc.
*/

#include <stdio.h>


int main(){
    //Declaracion de variables
    int dia;

    printf("Introduce un numero entre 1 y 4: ");
    scanf("%i", &dia);
    printf("\n");

    //Con if anidado
    printf("1. Usando el if anidado.\n\n");

    if(dia == 1){
        printf("Lunes.\n\n");
    }else if(dia == 2){
        printf("Martes.\n\n");
    }else if(dia == 3){
        printf("Miercoles.\n\n");
    }else if(dia == 4){
        printf("Jueves.\n\n");
    }else{
        printf("El numero introducido es incorrecto.\n\n");
    }

    printf("2. Usando switch.\n\n");

    switch (dia){
        case 1: printf("Lunes.\n");
                break;
        case 2: printf("Martes.\n");
                break;
        case 3: printf("Miercoles.\n");
                break;
        case 4: printf("jueves.\n");
                break;
        default: printf("El numero introducido es incorrecto.\n");
    }

    return 0;
}
