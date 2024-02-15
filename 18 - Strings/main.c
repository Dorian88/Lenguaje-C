/*Ejemplo:
* Introducir una frase como cadena de caracteres (String)
*
* Ejercicio:
* Comparar dos cadenas de caracteres.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char vector[13], c1[5], c2[5];

    printf("-------------EJEMPLO-------------\n");
    printf("-------------INTRODUCCION DE STRING-------------\n");
    printf("Introduce una frase: ");
    fgets(vector, 13, stdin);

    printf("%s\n\n", vector);

    printf("-------------EJERCICIO-------------\n");
    printf("-------------COMPARACION DE STRINGS-------------\n");

    printf("Introduce la primera frase: ");
    fflush(stdin);
    fgets(c1, 5, stdin);
    printf("Introduce la segunda frase: ");
    fflush(stdin);
    fgets(c2, 5, stdin);

    if(strcmp(c1, c2) == 0){
        printf("Los dos string son iguales\n");
    }else{
        printf("Los dos string NO son iguales\n");
    }

    return 0;
}
