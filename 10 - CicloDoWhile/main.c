/*Hacer un ciclo que nos pregunte si queremos continuar y hasta
* que no escribamos la letra s no pare
*/

#include <stdio.h>

int main(){
    int i;
    char c;

    i = 10;

    printf("En el ciclo do while todo lo que hay dentro se ejecuta ");
    printf("y despues se evalua la condicion y termina cuando sea falsa.\n\n");

    do{
        printf("Esto se ejecuta al menos una vez.\n");
        i++;
    }while (i < 15);

    printf("\n\n");

    printf("Solucion de ejemplo de ingresar una letra y el ciclo termine ");
    printf("cuando se digite la letra s\n");

    do{
        printf("Introduce una letra: ");
        fflush(stdin);
        scanf("%c", &c);
    }while (c != 's' && c != 'S');

    return 0;
}
