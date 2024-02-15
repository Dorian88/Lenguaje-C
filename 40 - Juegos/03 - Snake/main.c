//Snake

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define V 21
#define H 65
#define N 100

typedef struct {
    int x, y;
    int modX, modY;
    char imagen;
}snk;

typedef struct{
    int x, y;
}frt;

snk snake[N];
frt fruta;

void inicio(int *tam, char campo[V][H]);
void introCampo(char campo[V][H]);
void introDatos(char campo[V][H], int tam);
void draw(char campo[V][H]);
void loop(char campo[V][H], int tam);
void input(char campo[V][H], int *tam, int *muerto);
void update(char campo[V][H], int tam);
void introDatos2(char campo[V][H], int tam);

int main(){
    int tam;
    char campo[V][H];

    inicio(&tam, campo); //Inicializar todos los elementos
    loop(campo, tam);
    return 0;
}

//Iniciar todos los elementos
void inicio(int *tam, char campo[V][H]){
    int i;

    //Cabeza de la serpiente
    snake[0].x = 32;
    snake[0].y = 10;

    //Tamaño de la serpiente
    *tam = 4;

    //Coordenadas de la fruta
    srand(time(NULL));

    fruta.x = rand() % (H - 1);
    fruta.y = rand() % (V - 1);

    while(fruta.x == 0){
        fruta.x = rand() % (H - 1);
    }

    while(fruta.y == 0){
        fruta.y = rand() % (V - 1);
    }

    for(i = 0; i < *tam; i++){
        snake[i].modX = 1;
        snake[i].modY = 0;
    }

    introCampo(campo);
    introDatos(campo, *tam);
}

//Creacion del campo de juego
void introCampo(char campo[V][H]){
    int i, j;

    for(i = 0; i < V; i++){
        for(j = 0; j < H; j++){
            if(i == 0 || i == V - 1){
                campo[i][j] = '-';
            }else if(j == 0 || j == H - 1){
                campo[i][j] = '|';
            }else{
                campo[i][j] = ' ';
            }
        }
    }
}

//Ingresara todos los datos en la matriz campo

void introDatos(char campo[V][H], int tam){
    int i;

    for(i = 1; i < tam; i++){
        snake[i].x = snake[i - 1].x - 1;
        snake[i].y = snake[i - 1].y;

        snake[i].imagen = 'X';
    }

    snake[0].imagen = '0';

    for(i = 0; i < tam; i++){
        campo[snake[i].y][snake[i].x] = snake[i].imagen;
    }

    campo[fruta.y][fruta.x] = '@';
}

void draw(char campo[V][H]){
    int i, j;

    for(i = 0; i < V; i++){
        for(j = 0; j< H; j++){
            printf("%c", campo[i][j]);
        }
        printf("\n");
    }
}

void loop(char campo[V][H], int tam){
    int muerto;

    muerto = 0;

    do{
        system("cls");
        draw(campo);
        input(campo, &tam, &muerto);
        update(campo, tam);
    }while(muerto == 0);
}

void input(char campo[V][H], int *tam, int *muerto){
    char key;
    int i;

    //Comprobar si hemos muerto
    if(snake[0].x == 0 || snake[0].x == H - 1 || snake[0].y == 0 || snake[0].x == V - 1){
        *muerto = 1;
    }

    for(i = 1; i < *tam && *muerto == 0; i++){
        if(snake[0].x == snake[i].x && snake[0].y == snake[i].y){
            *muerto = 1;
        }
    }

    //Comprobar si hemos comido la fruta
    if(snake[0].x == fruta.x && snake[0].y == fruta.y){
        *tam +=1;
        snake[*tam - 1].imagen = 'X';

        fruta.x = rand() % (H - 1);
        fruta.y = rand() % (V - 1);

        while(fruta.x == 0){
            fruta.x = rand() % (H - 1);
        }

        while(fruta.y == 0){
            fruta.y = rand() % (V - 1);
        }
    }

    if(*muerto == 0){
        if(kbhit() == 1){
            key = getch();

            if(key == '2' && snake[0].modY != -1){
                snake[0].modX = 0;
                snake[0].modY = 1;
            }

            if(key == '8'&& snake[0].modY != 1){
                snake[0].modX = 0;
                snake[0].modY = -1;
            }

            if(key == '4'&& snake[0].modX != 1){
                snake[0].modX = -1;
                snake[0].modY = 0;
            }

            if(key == '6'&& snake[0].modX != -1){
                snake[0].modX = 1;
                snake[0].modY = 0;
            }
        }
    }
}

void update(char campo[V][H], int tam){
    //Borrar todos los datos de la matriz
    introCampo(campo);

    //Introducir los nuevos datos
    introDatos2(campo, tam);
}

void introDatos2(char campo[V][H], int tam){
    int i;

    //Crear la persecucion de los elementos del cuerpo
    for(i = tam - 1; i > 0; i--){
        snake[i].x = snake[i - 1].x;
        snake[i].y = snake[i - 1].y;
    }

    snake[0].x += snake[0].modX;
    snake[0].y += snake[0].modY;

    for(i = 0; i < tam; i++){
        campo[snake[i].y][snake[i].x] = snake[i].imagen;
    }

    campo[fruta.y][fruta.x] = '@';
}
