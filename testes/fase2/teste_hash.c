#include <stdio.h>
#include "../../include/fase2/hash.h"

int main(){
    FILE *dataset = fopen("../../data/dataset1.csv", "r");
    if (dataset == NULL) {
        printf("ERRO: Nao foi possivel abrir o arquivo! Verifique o caminho.\n");
        return 1;
    }
    printf("2. Arquivo aberto com sucesso\n"); fflush(stdout);
    Tabela *t = criar_tabela();
    if (t == NULL) {
        printf("Erro ao criar tabela\n"); fflush(stdout);
        return 1;
    }
    printf("3. Tabela criada na memoria\n");
    montar_tabela(t,dataset);
    printf("4. Saiu da funcao montar_tabela\n");
    for(int i = 0; i<100003;i++){
        if(t->no[i]!=NULL){
            No *aux = t->no[i];
            while(aux!=NULL){
                printf("Index: %i / Produto: %s / Categoria: %s / Valor: %f\n", i, aux->produto.nome, aux->produto.categoria, aux->produto.valor);
                aux = aux->proximo;
                }
        }
    }
}