//Funciones de lecturas de un fichero .txt

#include <stdio.h>
#include <string.h>

int main(){
    char aux;
    char aux2;
    FILE *f;

    f = fopen("ejemplo.txt", "r");//r: modo lectura.

    if(f == NULL){
        printf("No se ha podido abrir el archivo.\n");
        exit(1);
    }

    printf("Leer un archivo: método por caracter fgetc.\n");

    while(aux != EOF){
        aux = fgetc(f);//fgetc: lee un caracter
        printf("%c", aux);
    }
    printf("\n");

    fclose(f);

    f = fopen("ejemplo.txt", "r");//r: modo lectura.

    if(f == NULL){
        printf("No se ha podido abrir el archivo.\n");
        exit(1);
    }

    printf("Leer un archivo: metodo por string fgets.\n");

    while(!feof(f)){
        fgets(aux2, 100, f);
        printf("%s", aux2);
    }
    printf("\n");

    fclose(f);

    return 0;
}
