//Hacer un cronometro que comience cuando se pulse la tecla espacio.

#include <stdio.h>
#include <windows.h>

int main(){
    //Declaracion de variables
    int hor, min, seg, x;

    x = 1000;

    for(hor = 0; hor < 24; hor++){
        for(min = 0; min < 60; min++){
            for(seg = 0; seg < 60; seg++){
                printf("%02i:%02i:%02i\r", hor, min, seg);
                Sleep(x);
            }
        }
    }
    return 0;
}
