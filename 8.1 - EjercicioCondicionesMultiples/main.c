/* Escriba un programa que acepte tres números, horas, minutos y segundos
*  devuelva la hora que sera dentro un segundo, controlando que sea una hora
*  correcta.
*/

#include <stdio.h>

int main(){
    int hor, min, seg;

    printf("Introduce el valor para horas: ");
    scanf("%i", &hor);
    printf("\n");
    printf("Introduce el valor para minutos: ");
    scanf("%i", &min);
    printf("\n");
    printf("Introduce el valor para segundos: ");
    scanf("%i", &seg);
    printf("\n");

    printf("La hora introducida es: %i:%i:%i.\n", hor, min, seg);

    if (hor <= 23 && min <= 59 && seg <= 59){
        seg += 1;
        if (seg == 60){
            min += 1;
            seg = 0;
        }

        if (min == 60){
            hor += 1;
            min = 0;
        }

        if (hor == 24){
            hor = 0;
        }

        printf("La hora es: %i:%i:%i.\n", hor, min, seg);
    }else{
        printf("La hora introducida NO es correcta.\n");
    }
    return 0;
}
