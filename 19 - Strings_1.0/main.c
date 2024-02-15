/*Ejemplo:
Acceder a un elemento de un string

Ejercicio:
Cambiar en una frase dad la letra a por un espacio*/

#include <stdio.h>
#include <string.h>

void cambio(char c[]);
void cambiarLetra(char c2[]);

int main(){
    char c1[10];
    char c2[] = "Me llamo Dorian Alexander Jaramillo Rivas";

    printf("------------EJEMPLO------------\n");
    printf("Introduzca una frase: ");
    fgets(c1, 10, stdin);

    cambio(c1);

    printf("%s\n", c1);

    printf("------------EJERCICIO------------\n");
    cambiarLetra(c2);

    printf("%s\n", c2);

    return 0;
}

void cambio(char c[]){
    int i;

    for (i = 0; i < 10; i++){
        if (c[i]=='\n'){
            c[i] = '\0';
        }
    }
}

void cambiarLetra(char c2[]){
    int i, lim;

    lim = strlen(c2);

    for (i = 0; i < lim; i++){
        if(c2[i] == 'a' || c2[i] == 'A'){
            c2[i] = ' ';
        }
    }
}
