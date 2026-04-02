#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include "./include/carregamento.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);  // para o console imprimir os nomes corretamente remover depois 

    
    FILE *dataset = fopen("data/dataset1.csv", "r");  // carrega o csv em modo de leitura

    Produto *produtos = organizar_produtos(dataset, 100003);  // roda a função para formar o vetor a partir do csv


    // teste para ver se o vetor carregou corretamente

    /* for(int i = 0; i<10;i++){
        printf("ID: %i, Nome: %s , Categoria: %s, Valor: %.2f\n", (produtos+i)->id, (produtos+i)->nome, (produtos+i)->categoria , (produtos+i)->valor);
        printf("ID: %i, Nome: %s , Categoria: %s, Valor: %.2f\n", (produtos+99993+i)->id, (produtos+99993+i)->nome, (produtos+99993+i)->categoria , (produtos+99993+i)->valor);
    }  */


    fclose(dataset);

    return 0;
}