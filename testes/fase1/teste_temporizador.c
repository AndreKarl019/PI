#include <stdio.h>
#include <stdlib.h>
#include "../../include/global/temporizador.h"

int main(){
   
    iniciar_timer();
    float z = 1;
    for(int i = 0; i<30000; i++){
        for(int j = 0; j<30000; j++){
           z = z*1.0001;
        }
    }
    float y = finalizar_timer();
    printf("Tempo demorado: %.3f segundos", y);

    return 0;
}