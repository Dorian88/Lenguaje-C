//Hacer un programa que haga la suma de dos numeros

#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b);
int suma_is(int a, int b, int res);

int main(){
    int res_suma;

    res_suma = suma(8, 10);

    printf("El resultado de la sumas es: %i\n", res_suma);

    return 0;
}

int suma(int a, int b){
    return suma_is(a, b, 0);
}

int suma_is(int a, int b, int res){
    if(a == 0){
        return res + b;
    }else{
        suma_is(a - 1, b, res + 1);
    }
}
