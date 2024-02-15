/*Crear una estructura que represente un libro usando los strings
* dinamicos */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *nombre;
    char *autor;
}libro;

void cambio(char c[]);

int main(){
    char aux[50];
    libro lotr;

    printf("Introduce un nombre para el libro: ");
    fgets(aux, 50, stdin);
    cambio(aux);

    lotr.nombre = (char*)malloc((strlen(aux) + 1)*sizeof(char)); //Reserva de memoria

    if(lotr.nombre == NULL){
        printf("No se ha podido reservar espacio de memoria.\n");
        exit(1);
    }

    strcpy(lotr.nombre, aux);

    printf("Introduce un nombre para el autor del libro: ");
    fflush(stdin);
    fgets(aux, 50, stdin);
    cambio(aux);

    lotr.autor = (char*)malloc((strlen(aux) + 1)*sizeof(char)); //Reserva de memoria

    if(lotr.autor == NULL){
        printf("No se ha podido reservar espacio de memoria.\n");
        exit(1);
    }

    strcpy(lotr.autor, aux);

    printf("%s. \n", lotr.nombre);
    printf("%s. \n", lotr.autor);

    free(lotr.nombre);
    free(lotr.autor);

    return 0;
}

void cambio(char c[]){
    int i, temp = 0;

    for (i = 0; i < 10 && temp == 0; i++){
        if (c[i]=='\n'){
            c[i] = '\0';
            temp = 1;
        }
    }
}
