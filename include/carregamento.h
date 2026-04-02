#ifndef CARREGAMENTO_H
#define CARREGAMENTO_H

#include <stdio.h>

typedef struct produto_t {
int id;
char nome[51];
char categoria[31];
float valor;
} Produto;


Produto *organizar_produtos(FILE *arquivo, int linhas); //função para organizar o .csv em um vetor da struct Produto


#endif
