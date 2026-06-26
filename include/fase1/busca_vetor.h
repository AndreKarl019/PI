#ifndef BUSCA_VETOR_H
#define BUSCA_VETOR_H
#include <locale.h>
#include <windows.h>
#include "carregamento_vetor.h"


int Busca_vetor(Produto_vetor *vetor, int id, int linhas);

int *montar_vetores(Produto_vetor *vetor);

#endif