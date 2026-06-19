#ifndef HASH_H
#define HASH_H

#include <stdio.h>

typedef struct Produto {
    int id;
    char nome[51];
    char categoria[31];
    float valor;
} Produto;

typedef struct No{
    struct No *proximo;
    struct Produto produto;
}No;

typedef struct Tabela{
    No **no;
}Tabela;

Tabela * criar_tabela(); // cria a tabela
void colisao(Tabela *tabela, No *no, int hash);   //trata as colisões
void montar_tabela(Tabela *tabela, FILE *arquivo); // preenche a tabela com todos os dados do arquivo no formato produto

#endif