#include<stdio.h>
#include<time.h>
#include"../include/temporizador.h"

float iniciar_timer(){
    clock_t tempo_inicial = clock();
    return tempo_inicial;
}

float finalizar_timer(float tempo_inicial){
    clock_t tempo_final = clock();
    float duracao = (float)(tempo_final - tempo_inicial)/CLOCKS_PER_SEC;
    
    return duracao;
}
