//Estructuras Selectivas (if, if - else,)

#include <stdio.h>


int main(){
    printf("Las estructuras selectivas son:\n");
    printf("1. if\n2. if - else\n\n");

    //Declaracion de variables
    int x;

    //Inicializacion de variables
    x = 5;

    printf("El valor de x es: %i\n\n", x);

    printf("Los operadores de comparacion son:\n");
    printf("1. ==: Igual\n2. <: Menor que\n3. <=: Menor o igual que\n");
    printf("4. >: Mayor que\n5. >==: Mayor o igual que\n6. !=: diferente\n\n");


    //Uso del if
    printf("Usando el if con el operador ==:\n");
    if(x == 5){
        printf("El valor de x es 5.\n");
    }
    printf("se ejecuta el if\n\n");

    printf("Usando el if con el operador <:\n");
    if(x < 4){
        printf("El valor de x es menor que 5.\n");
    }
    printf("no se ejecuta el if\n\n");

    printf("Usando el if con el operador <=:\n");
    if(x <= 5){
        printf("El valor de x es menor o igual que 5.\n");
    }
    printf("se ejecuta el if\n\n");

    printf("Usando el if con el operador >:\n");
    if(x > 5){
        printf("El valor de x es mayor que 5.\n");
    }
    printf("no se ejecuta el if\n\n");

    printf("Usando el if con el operador >=:\n");
    if(x >= 5){
        printf("El valor de x es mayor o igual que 5.\n");
    }
    printf("se ejecuta el if\n\n");

    printf("Usando el if con el operador !=:\n");
    if(x != 5){
        printf("El valor de x es diferente de 5.\n");
    }
    printf("no se ejecuta el if\n\n");

    printf("____________________________________________");
    //Usando el if - else
    printf("Usando el if - else con el operador ==:\n");
    if(x == 5){
        printf("El valor de x es 5.\n");
    }
    else{
        printf("El valor de x NO es 5\n");
    }
    printf("se ejecuta el if y no el else\n\n");

    printf("Usando el if con el operador <:\n");
    if(x < 4){
        printf("El valor de x es menor que 5.\n");
    }else{
        printf("El valor de x NO es 5\n");
    }
    printf("no se ejecuta el if, entonces se ejecuta el else\n\n");

    printf("Usando el if con el operador <=:\n");
    if(x <= 5){
        printf("El valor de x es menor o igual que 5.\n");
    }else{
        printf("El valor de x NO es menor o igual que 5\n");
    }
    printf("se ejecuta el if y no el else\n\n");

    printf("Usando el if con el operador >:\n");
    if(x > 5){
        printf("El valor de x es mayor que 5.\n");
    }else{
        printf("El valor de x NO es mayor que 5\n");
    }
    printf("no se ejecuta el if, entonces se ejecuta el else\n\n");

    printf("Usando el if con el operador >=:\n");
    if(x >= 5){
        printf("El valor de x es mayor o igual que 5.\n");
    }else{
        printf("El valor de x NO es 5\n");
    }
    printf("se ejecuta el if y no el else\n\n");

    printf("Usando el if con el operador !=:\n");
    if(x != 5){
        printf("El valor de x es diferente de 5.\n");
    }else{
        printf("El valor de x NO es diferente de 5\n");
    }
    printf("no se ejecuta el if, entonces se ejecuta el else\n\n");
    return 0;
}
