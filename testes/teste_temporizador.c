#include <stdio.h>
#include <stdlib.h>
#include "../include/temporizador.h"

int main(){
   
    float x = iniciar_timer();
    float z = 1;
    for(int i = 0; i<30000; i++){
        for(int j = 0; j<30000; j++){
           z = z*1.0001;
        }
    }
    float y = finalizar_timer(x);
    printf("Tempo demorado: %.3f segundos", y);

    return 0;
}