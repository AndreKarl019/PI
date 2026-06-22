#include <stdio.h>
#include <stdlib.h>
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
    
    No *achei = malloc(sizeof(No));
    achei = busca_hash(89567,t);

    printf("Nome: %s, Categoria: %s, Valor: %.2f, ID: %i\n", achei->produto.nome, achei->produto.categoria, achei->produto.valor, achei->produto.id);

    achei = busca_hash(1000000,t);
    if(achei == NULL){
        printf("ID nao encontrado\n");
    }else{
        printf("Nome: %s, Categoria: %s, Valor: %.2f, ID: %i\n", achei->produto.nome, achei->produto.categoria, achei->produto.valor, achei->produto.id);
    }

    return 0;
}