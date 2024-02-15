#include "graficos.h"

//Funciones privadas.
static void directx(){
    printf("Hemos elegido la opcion DirectX.\n");
}

static void opengl(){
    printf("Hemos elegido la opcion OpenGL.\n");
}

void graf(int opcion){
    switch(opcion){
        case 1:
            directx();
            break;
        case 2:
            opengl();
            break;
    }
}
