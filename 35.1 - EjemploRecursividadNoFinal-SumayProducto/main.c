/* Ejemplo de suma y producto en recursividad no final*/

#include <stdio.h>

int suma(int num1, int num2);
int producto(int num1, int num2);

int main(){
    int num1, num2, res;

    printf("Introduce dos numeros cualquiera.\n");
    printf("Primer numero: ");
    scanf("%i", &num1);

    printf("Segundo numero: ");
    scanf("%i", &num2);

    res = suma(num1, num2);

    printf("El resultados de la suma de %i y %i es %i.\n", num1, num2, res);

    res = producto(num1, num2);

    printf("El resultados del producto de %i y %i es %i.\n", num1, num2, res);

    return 0;
}

int suma(int num1, int num2){
    if(num2 == 0){
        return num1;
    }else{
        return 1 + suma(num1, num2 - 1);
    }
}


int producto(int num1, int num2){
    if(num2 == 1){
        return num1;
    }else{
        return num1 + producto(num1, num2 - 1);
    }
}
