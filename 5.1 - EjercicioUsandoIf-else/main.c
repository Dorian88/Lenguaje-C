/*Declaramos una variable entera y la iniciamos con un valor
* entre 1 y 10, por teclado solicitaos un valor y verificamos
* si hemos acertado.
*/

#include <stdio.h>

int main(){
    //Declaracion de variables.
    int num, val;

    //Inicializacion de variables
    val = 0;
    num = 6;

    printf("--------ACIERTA EL VALOR--------\n\n\n");

    printf("Ingrese un valor entre 1 y 10: ");
    scanf("%i", &val);
    printf("\n");

    if(val == num){
        printf("Felicitaciones!: has acertado el valor.\n");
    }else{
        printf("Lo siento no has acertado el valor. Suerte para la proxima vez.\n");
    }


    return 0;
}
