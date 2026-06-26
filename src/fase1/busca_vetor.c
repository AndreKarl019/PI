#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include "../../include/fase1/busca_vetor.h"
#include "../../include/fase1/carregamento_vetor.h"

int *montar_vetores(Produto_vetor *vetor){
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

int Busca_vetor(Produto_vetor *vetor, int id, int linhas){   
    for(int i = 0; i < linhas; i++){
        if((vetor + i)->id == id){
            return i;
        } 
    }
        
    return -1;
}