#ifndef CARREGAMENTO_VETOR_H
#define CARREGAMENTO_VETOR_H

#include <stdio.h>

typedef struct produto_t {
int id;
char nome[51];
char categoria[31];
float valor;
} Produto_vetor; // struct do vetor do csv


Produto_vetor *organizar_produtos(FILE *arquivo, int linhas); //função para organizar o .csv em um vetor da struct Produto


#endif
