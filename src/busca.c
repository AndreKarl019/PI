#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include "../include/busca.h"
#include "../include/carregamento.h"

int *montar_vetores(Produto *vetor){
    int *ids = (int*)malloc(sizeof(int)*2000);

    for(int i = 0; i < 2000; i++){
        if( i < 1500){
            ids[i] = (vetor +66*i)->id;
        } else {
            ids[i] = 1000000 +25*i;
        }
    }
    return ids;
}

void Busca(Produto *vetor, int *id, int linhas){   
    
    SetConsoleOutputCP(CP_UTF8);  // para o console imprimir os nomes corretamente remover depois 

    for(int i = 0; i < 2000; i++){
        for(int j = 0; j < linhas; j++){
            if( (vetor + j)->id == id[i]){
                    printf("O id: %i esta na posição %i\n", *(id+i), j+2);  //printf apenas para utilizar com o teste remover depois
                //adicionar aqui a função de salvamento de resultado
                break;
            } 
        }
    }
}