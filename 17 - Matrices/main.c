/*Ejemplo:
* Crear una matriz y mostrarla por pantalla.
*
* Ejercicio:
* Hacer un programa que compare dos matrices
*/

#include <stdio.h>

void introduceMatriz(int mat[][5]);
void introduceMatriz1(int mat1[][2]);
void leerMatriz(int mat[][5]);
void comparar(int m1[][2], int m2[][2]);

int main(){
    int matriz[5][5], mat1[2][2], mat2[2][2];

    printf("-----------------EJEMPLO-----------------\n");
    printf("-----------------CREAR MATRIZ-----------------\n\n");
    introduceMatriz(matriz);
    leerMatriz(matriz);
    printf("\n");

    printf("-----------------EJERCICIO-----------------\n");
    printf("-----------------COMPARAR MATRICES-----------------\n");

    introduceMatriz1(mat1);
    printf("\n");
    introduceMatriz1(mat2);

    comparar (mat1, mat2);

    printf("\n");

    return 0;
}

void introduceMatriz(int mat[][5]){
    int i, j;
    srand(time(NULL));

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            mat[i][j] = rand()%10;
        }
    }
}

void leerMatriz(int mat[][5]){
    int i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }
}

void introduceMatriz1(int mat1[][2]){
    int i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Valor[%i][%i]: ", i + 1, j + 1);
            scanf("%i", &mat1[i][j]);
        }
    }
}

void comparar(int m1[][2], int m2[][2]){
    int i, j, aux;
    aux = 0;

    for(i = 0; i < 2 && aux == 0; i++){
        for(j = 0; j < 2 && aux == 0; j++){
            if(m1[i][j] != m2[i][j]){
                aux = 1;
            }
        }
    }

    printf("\n");

    if(aux == 0){
        printf("Las dos matrices son iguales");
    }else{
        printf("Las dos matrices NO son iguales");
    }
}
