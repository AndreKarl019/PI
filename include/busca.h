#ifndef BUSCA_H
#define BUSCA_H
#include <locale.h>
#include <windows.h>
#include "../include/carregamento.h"


void Busca(Produto *vetor, int *id, int linhas, FILE *resultado);

int *montar_vetores(Produto *vetor);

#endif