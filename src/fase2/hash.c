#include <stdlib.h>
#include <stdio.h>
#include "../../include/fase2/hash.h"

int calc_hash(int id){
    unsigned long int x;
    x = id*id;
    return (x/100)%100003;
}

Tabela * criar_tabela(){
    Tabela *t = (Tabela*)malloc(sizeof(Tabela));
    if(t==NULL){
        return NULL;
    }
    t->no = (No**)calloc(100003, sizeof(No*));
    return t;
}

void colisao(Tabela *tabela, No *no, int hash){
    No *aux = tabela->no[hash];
    while(aux->proximo!=NULL){
        aux = aux->proximo;
    }
    aux->proximo = no;
}

void montar_tabela(Tabela *tabela, FILE *arquivo){
    No *aux = (No*)malloc(sizeof(No));
    aux->proximo = NULL;
    int c;
    
    while((c = fgetc(arquivo))!='\n'&&c!=EOF);

    while(fscanf(arquivo,"%d,%50[^,],%30[^,],%f,",
        &aux->produto.id, 
        aux->produto.nome, 
        aux->produto.categoria, 
        &aux->produto.valor)!=EOF){

            int hash = calc_hash(aux->produto.id);
            No *novo = (No*)malloc(sizeof(No));
            novo->produto = aux->produto;
            novo->proximo = NULL;

            if(tabela->no[hash]==NULL){
                tabela->no[hash] = novo; 
            }else{
                colisao(tabela,novo,hash);
            }
        };
    
        free(aux);
}


