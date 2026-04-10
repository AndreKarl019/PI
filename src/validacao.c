#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include "../include/validacao.h"

void validar_arquivo(Produto *vetor, int linhas){
    SetConsoleOutputCP(CP_UTF8);  // para o console imprimir os nomes corretamente 
    for(int i = 0; i<linhas ;i++){
        if ((vetor + i) -> id < 0){
            printf("ID Inválido na linha %i\n", i);
        }
        if (((strcmp((vetor + i)->nome, "{"))>=0)){
            printf("Nome Inválido na linha %i\n", i);
        }
        if (((strcmp((vetor + i)->categoria,"{"))>=0)){
            printf("Categoria Inválida na linha %i\n", i);
        }
        if ((vetor + i) -> valor < 0){
            printf("Valor Inválido na linha %i\n", i);
        }
    }
}

