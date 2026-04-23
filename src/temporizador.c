#include<stdio.h>
#include<time.h>
#include"../include/temporizador.h"

static struct timespec inicio, fim;

void iniciar_timer(){
    clock_gettime(CLOCK_MONOTONIC, &inicio);
}

double finalizar_timer(){
    float segundos, nanosegundos;
    clock_gettime(CLOCK_MONOTONIC, &fim);
    segundos = fim.tv_sec - inicio.tv_sec;
    nanosegundos = fim.tv_nsec - inicio.tv_nsec;
    if (nanosegundos < 0) {
        segundos -= 1;
        nanosegundos += 1000000000L;
    }
    double duracao = (double)segundos+(double)(nanosegundos/1e9);
    
    return duracao;
}
