/*Coger los datos de los trabajadres del archivo de datos
* y almacenarlos en una estructura*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char *nombre;
    int edad;
}trabajadores;

trabajadores *trab;

void vaciar (char temp[]);
void copiar(char temp[], int i);

int main(){
    FILE *f;
    int cont = 0;
    char temp[50], aux;
    int i, k;

    f = fopen("trabajadores.txt", "r");

    if(f == NULL){
        printf("No se ha podido abrir el archivo");
        exit(1);
    }

    while(!feof(f)){
        fgets(temp, 50, f);
        cont++;
    }

    rewind(f);

    printf("reservar\n");

    trab = (trabajadores*)malloc(cont*sizeof(trabajadores));
    if(trab == NULL){
        printf("No se ha reservado memoria.\n");
        exit(1);
    }

    for(i = 0; !feof(f); i++){
        vaciar(temp);
        aux = '0';

        for(k = 0; aux != '-'; k++){
            aux = fgetc(f);
            if (aux != '-'){
                temp[k] = aux;
            }
        }

        copiar(temp, i);

        fgets(temp, 4, f);
        trab[i].edad = atoi(temp);

        printf("Nombre: %s Edad: \i.\n", trab[i].nombre, trab[i].edad);
    }
    return 0;
}

void vaciar (char temp[]){
    int j;

    for(j = 0; j < 50; j++){
        temp[j]; '\0';
    }
}

void copiar(char temp[], int i){
    int N = strlen(temp) + 1;

    trab[i].nombre = (char*)malloc(N*sizeof(char));
    if(trab[i].nombre){
        printf("No se ha reservado memoria.\n");
        exit(1);
    }

    strcpy(trab[i].nombre, temp);
}
