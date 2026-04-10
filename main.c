#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include "../include/carregamento.h"
#include "../include/temporizador.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);  // para o console imprimir os nomes corretamente, remover depois 

    
    FILE *dataset = fopen("data/dataset1.csv", "r");  // carrega o csv em modo de leitura

    Produto *produtos = organizar_produtos(dataset, 100003);  // roda a função para formar o vetor a partir do csv


   
   
    float x = iniciar_timer(); // inicia o temporizador 

        // botar a função de busca aqui

    float y = finalizar_timer(x); //finaliza o temporizador e retorna o tempo gasto

    fclose(dataset); // fecha o dataset

    return 0;
}