//Estructuras

#include <stdio.h>
#include <string.h>

typedef struct{
    int paginas;
    char nombre [50];
    float precio;
}libro;

int main(){
    libro GOT;
    libro lotr[3];
    int i;

    GOT.paginas = 50;
    strcpy(GOT.nombre, "Game of Thrones");
    GOT.precio = 85000;

    printf("El libro Game of Thrones tiene %i paginas.\n", GOT.paginas);
    printf("El nombre del libro es %s.\n", GOT.nombre);
    printf("El precio de Game of Thrones es %f.\n", GOT.precio);

    for (i = 0; i < 10; i++){
        lotr[i].precio = 100000 + i;
        printf("El precio de la estructura %i es de %f.\n", i + 1, lotr[i].precio);
    }
    return 0;
}
