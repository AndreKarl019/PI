#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include "include/fase1/carregamento_vetor.h"
#include "include/fase1/busca_vetor.h"
#include "include/global/temporizador.h"
#include "include/fase2/hash.h"

int main(){

    double tempo_total, tempo_segmento, y;
    No* achou = malloc(sizeof(No));
    SetConsoleOutputCP (CP_UTF8);

    FILE *dataset = fopen("data/dataset1.csv", "r"); 
    FILE *resultado = fopen("resultado2.txt", "w"); //arquivo aonde está imprimido os resultados da pesquisa


    iniciar_timer();
    Produto_vetor *vetorprod = organizar_produtos(dataset, 100003); //montagem em vetor conforme fase 1
    y = finalizar_timer();

    fprintf(resultado, "Tempo gasto para a montagem em vetor: %.9f\n\n",y);
    rewind(dataset);//rewind do dataset para poder ser usado novamente

    int *ids = montar_vetores(vetorprod); //criação de um vetor com quais IDs serão pesquisados (mesmo metodo usado na fase 1)
    free(vetorprod); //free no vetorprod para que interfira menos com os resultados da fase 2


    Tabela *tabela_hash = criar_tabela();

    iniciar_timer();
    montar_tabela(tabela_hash, dataset); // carrega o dataset em uma tabela hash
    y = finalizar_timer();

    fprintf(resultado, "Tempo gasto para a montagem em Tabela Hash: %.9f\n\n",y);

    
    

    fprintf(resultado, "\n            Primeiras 500 pesquisas\n\n");

    for(int i = 0; i<500; i++){
        iniciar_timer();
        achou = busca_hash(*(ids+i), tabela_hash);
        y = finalizar_timer();
        fprintf(resultado, "Tempo gasto: %.9f\n\n", y);
        tempo_segmento += y;
        tempo_total += y;
    }

    fprintf(resultado, "\n O tempo gasto para busca na Primeira parte foi: %.9fs, e o tempo medio por busca foi: %.9fs\n", tempo_segmento, tempo_segmento/500);
    tempo_segmento = 0;

    fprintf(resultado, "\n            Pesquisas 500 - 1000\n\n");

    for(int i = 500; i<1000; i++){
        iniciar_timer();
        achou = busca_hash(*(ids+i), tabela_hash);
        y = finalizar_timer();
        fprintf(resultado, "Tempo gasto: %.9f\n\n", y);
        tempo_segmento += y;
        tempo_total += y;
    }

    fprintf(resultado, "\n O tempo gasto para busca na Segunda parte foi: %.9fs, e o tempo medio por busca foi: %.9fs\n", tempo_segmento, tempo_segmento/500);
    tempo_segmento = 0;

    fprintf(resultado, "\n            Pesquisas 1000 - 1500\n\n");

    for(int i = 1000; i<1500; i++){
        iniciar_timer();
        achou = busca_hash(*(ids+i), tabela_hash);
        y = finalizar_timer();
        fprintf(resultado, "Tempo gasto: %.9f\n\n", y);
        tempo_segmento += y;
        tempo_total += y;
    }

    fprintf(resultado, "\n O tempo gasto para busca na Terceira parte foi: %.9fs, e o tempo medio por busca foi: %.9fs\n", tempo_segmento, tempo_segmento/500);
    tempo_segmento = 0;

    fprintf(resultado, "\n            Pesquisas Inexistentes\n\n");

    for(int i = 1500; i<2000; i++){
        iniciar_timer();
        achou = busca_hash(*(ids+i), tabela_hash);
        y = finalizar_timer();
        fprintf(resultado, "Tempo gasto: %.9f\n\n", y);
        tempo_segmento += y;
        tempo_total += y;
    }

    fprintf(resultado, "\n O tempo gasto para busca na quarta parte foi: %.9fs, e o tempo medio por busca foi: %.9fs\n", tempo_segmento, tempo_segmento/500);
    fprintf(resultado, "\n O tempo total gasto foi: %.9fs, e o tempo medio por busca foi: %.9fs\n", tempo_total, tempo_total/2000);
  
    return 0;
}