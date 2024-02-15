//Calcular el mayor entre dos número usando funciones.

#include <stdio.h>

int maximo();

int main(){
    //Declaracion de variables
    int x, y, max;

    printf("Ingrese un numero cualquiera: ");
    scanf("%i", &x);
    printf("\n");
    printf("Ingrese otro numero cualquiera: ");
    scanf("%i", &y);
    printf("\n");

    if(x == y){
        printf("Los numeros que ingresaste son iguales\n");
    }else{
        max = maximo(x, y);
        printf("El valor maximo es %i. \n", max);
    }

    return 0;
}

int maximo(int a, int b){

    int aux;

    if(a > b){
        aux = a;
    }else{
        aux = b;
    }

    return aux;
}
