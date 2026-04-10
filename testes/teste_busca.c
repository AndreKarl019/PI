#include <stdio.h>
#include <stdlib.h>
#include "../include/busca.h"
#include "../include/carregamento.h"

int main(){

    FILE *dataset = fopen("../data/dataset1.csv", "r");  // carrega o csv em modo de leitura

    Produto *produtos = organizar_produtos(dataset, 100003);  // roda a função para formar o vetor a partir do csv

    int *ids = montar_vetores(produtos);

    for(int i = 0; i<2000; i++){
        printf("%i\n", *(ids+i));
    }
    
    Busca(produtos, ids, 100003);

    return 0;
}