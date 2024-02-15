//Escribir en un archivo de texto
#include <stdio.h>
#include <string.h>

void cambio(char aux[]);

int main(){
    FILE *f, *f2;
    int num;
    char aux[50];

    printf("-------ESCRIBIR UN NUMERO-------\n\n");
    f = fopen("escribe1.txt", "w");

    if(f == NULL){
        printf("No se ha podido abrir el archivo.\n");
        exit(1);
    }

    printf("Introduce un numero por teclado: ");
    scanf("%i", &num);

    fprintf(f, "El numero introducido por teclado es: %i", num);

    fclose(f);

    printf("-------ESCRIBIR UN STRING-------\n\n");
    f = fopen("escribe2.txt", "w");

    if(f == NULL){
        printf("No se ha podido abrir el archivo.\n");
        exit(1);
    }

    printf("Escribe una frase: ");
    fgets(aux, 50, stdin);
    cambio(aux);

    fprintf(f, "La frase es: %s", aux);

    fclose(f);

    return 0;
}

void cambio(char aux[]){
    int i;

    for (i = 0; i < 50; i++){
        if (aux[i]=='\n'){
            aux[i] = '\0';
        }
    }
}
