#ifndef TEMPORIZADOR_H
#define TEMPORIZADOR_H

#include<stdio.h>
#include<time.h>


static struct timespec inicio, fim;
void iniciar_timer(); // inicia um temporizador 
double finalizar_timer(); // finaliza o temporizador retornando o tempo gasto


#endif