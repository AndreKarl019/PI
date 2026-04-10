#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/validacao.h"
#include "../include/carregamento.h"

int main (){

    FILE *dataset = fopen("../data/dataset1.csv", "r");  // carrega o csv em modo de leitura

    Produto *produtos = organizar_produtos(dataset, 100003);  // roda a função para formar o vetor a partir do csv

    validar_arquivo(produtos, 100003);


    fclose(dataset);


    return 0;
}