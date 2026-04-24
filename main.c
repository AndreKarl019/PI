#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include "include/carregamento.h"
#include "include/temporizador.h"
#include "include/busca.h"
#include "include/validacao.h"

//Se rerrodar o codigo deleta o resultado.txt

int main(){
    double tempo_total, tempo_segmento, y;
    int achou;
    SetConsoleOutputCP(CP_UTF8);  // para o console imprimir as palavras corretamente
    
    FILE *dataset = fopen("data/dataset1.csv", "r");  // carrega o csv em modo de leitura
    FILE *resultado = fopen("resultado.txt", "w");  // crie/abre em modo de append o .txt para os resultados

    Produto *produtos = organizar_produtos(dataset, 100003);  // roda a função para formar o vetor a partir do csv
    validar_arquivo(produtos, 100003); //validação dos elementos do vetor

    
    int *ids = montar_vetores(produtos);

   
   
   // primeiras 500 pesquisas
    fprintf(resultado, "\n            Primeiras 500 pesquisas\n\n");

    for(int i = 0; i<500; i++){
        iniciar_timer(); // inicia o temporizador 
        achou = Busca(produtos, *(ids+i), 100003);
        y = finalizar_timer(); //finaliza o temporizador e retorna o tempo gasto
        fprintf(resultado, "Tempo gasto: %.9f, Posição: %i\n", y, achou);
        tempo_segmento += y;
        tempo_total += y;
    }
   
    fprintf(resultado, "\n");
    fprintf(resultado, " O tempo gasto para busca na primeira parte foi: %.9fs, e o tempo medio por busca foi: %.9fs\n", tempo_segmento, tempo_segmento/500);
    tempo_segmento = 0;

    // Pesquisas 500 - 1000
    fprintf(resultado, "\n            Pesquisas 500 - 1000\n\n");

    for(int i = 500; i<1000; i++){
        iniciar_timer(); // inicia o temporizador 
        achou = Busca(produtos, *(ids+i), 100003);
        y = finalizar_timer(); //finaliza o temporizador e retorna o tempo gasto
        fprintf(resultado, "Tempo gasto: %.9f, Posição: %i\n", y, achou);
        tempo_segmento += y;
        tempo_total += y;
    }
   
    fprintf(resultado, "\n");
    fprintf(resultado, " O tempo gasto para busca na segunda parte foi: %.9fs, e o tempo medio por busca foi: %.9fs\n", tempo_segmento, tempo_segmento/500);
    tempo_segmento = 0;

    // Pesquisas 1000 - 1500
    fprintf(resultado, "\n            Pesquisas 1000 - 1500\n\n");

    for(int i = 1000; i<1500; i++){
        iniciar_timer(); 
        achou = Busca(produtos, *(ids+i), 100003);
        y = finalizar_timer();
        fprintf(resultado, "Tempo gasto: %.9f, Posição: %i\n", y, achou);
        tempo_segmento += y;
        tempo_total += y;
    }
   
    fprintf(resultado, "\n");
    fprintf(resultado, " O tempo gasto para busca na terceira parte foi: %.9fs, e o tempo medio por busca foi: %.9fs\n", tempo_segmento, tempo_segmento/500);
    tempo_segmento = 0;

    // Pesquisas 1500 - 2000
    fprintf(resultado, "\n            Pesquisas 1500 - 2000\n\n");

    for(int i = 1500; i<2000; i++){
        iniciar_timer(); 
        achou = Busca(produtos, *(ids+i), 100003);
        y = finalizar_timer();
        fprintf(resultado, "Tempo gasto: %.6f, Posição: %i\n", y, achou);
        tempo_segmento += y;
        tempo_total += y;
    }
   
    fprintf(resultado, "\n");
    fprintf(resultado, " O tempo gasto para busca na quarta parte foi: %.9fs, e o tempo medio por busca foi: %.9fs\n", tempo_segmento, tempo_segmento/500);
    fprintf(resultado, " O tempo total para todos os 4 tipos foi: %.9fs, e a media dos 4 tipos: %.9fs\n", tempo_total, tempo_total/4);

    fclose(resultado); // fecha o arquivo txt 
    fclose(dataset); // fecha o dataset

    return 0;
}