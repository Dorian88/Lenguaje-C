/*Hacer un programa que compruebe si una matriz es simetrica o no
* de la manera mas eficiente posible*/

#include <stdio.h>
#define N 5

int fun(int mat[N][N]);
int fun_final(int mat[N][N], int i, int j);

int main(){
    int resultados;

    int m[5][5] = {
        {1, 2, 3, 4, 5},
        {2, 1, 2, 3, 4},
        {3, 2, 1, 2, 3},
        {4, 3, 2, 1, 2},
        {5, 4, 3, 2, 1}
    };

    resultados = fun(m); //Devuelve 1 si la matriz es simetrica y 0 si no lo es.

    if(resultados == 1){
        printf("La matriz es simetrica.\n");
    }else{
        printf("La matriz NO es Simetrica.\n");
    };

    return 0;
}

int fun(int mat[N][N]){
    return fun_final(mat[N][N], 0, 1);
}

int fun_final(int mat[N][N], int i, int j){
    if(i == N - 1){
        return 1;
    }else{
        if(mat[i][j] != mat[j][i]){
            return 0;
        }/*else{
            if(j == N - 1){
                return fun_final(mat, i + 1, i + 2);
            }else{
                return fun_final(mat, i, j + 1);
            }
        }*/
    }
}
