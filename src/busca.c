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

int Busca(Produto *vetor, int id, int linhas){   
    for(int i = 0; i < linhas; i++){
        if((vetor + i)->id == id){
            return i;
        } 
    }
        
    return -1;
}