#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../include/fase1/carregamento_vetor.h"

Produto_vetor *organizar_produtos(FILE *arquivo, int linhas){
    Produto_vetor *saida = (Produto_vetor *)malloc(linhas*sizeof(Produto_vetor));
    int c;
    
    
    while((c = fgetc(arquivo))!='\n'&&c!=EOF);
    for(int i = 0; i<(linhas);i++){
        if(fscanf(arquivo,"%d,%50[^,],%30[^,],%f,",
            &saida[i].id, 
            saida[i].nome, 
            saida[i].categoria, 
            &saida[i].valor)==EOF){
                break;
            };
    }

    return saida;
}