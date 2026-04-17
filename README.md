# PROJETO INTEGRADOR - GRUPO 2 - FASE 1

Projeto acadêmico desenvolvido por estudantes de Ciência da Computação com o intuito de desenvolver uma base experimental para análise de desempenho de algoritmos de busca utilizando datasets.
O foco da fase atual é estabelecer uma baseline de referência comparativa para ser utilizada na fase 2.


## Funcionamento
* Ler o CSV inserido em data/dataset.csv

* Popular o vetor.

* Executar as buscas sequenciais.

* Mostrar resultados no terminal e gerar resultados.txt

## Requisitos

* Compilador C (GCC ou outros).
* Terminal (Gitbash, powershell etc).
* Arquivo de dataset .csv disponível na pasta `data/`.
  
## Modo de uso:

* Copie o template do repositório.

* Clone o Repositório na sua máquina local.
 No terminal, execute:
 `git clone https://github.com/seuusername/pi.git`
Esse comando vai clonar o projeto para sua máquina.

* Insira o dataset desejado na pasta `data/`.

# Pastas

| Pastas | Descrição |
|----------|----------|
| data  |  dataset  |
| include | arquivos de cabeçalho do projeto |
| src | código fonte  |
| testes | teste de função das headers |

## data/
contém o dataset utilizado no programa.

| Arquivos | Descrição |
|----------|----------|
| dataset.csv |  dataset com 100004 entradas  |


## include/
contém as headers a serem utilizadas no programa.

| Arquivos | Descrição |
|----------|----------|
| busca.h |  header com as funções de busca   |
| carregamento.h |  header com as funções de carregamento  |
| temporizador.h |  header com as funções de temporização  |
| validacao.h |  header com as funções de validação  |

## src/
contém todos os arquivos .c com exceção da main.

| Arquivos | Descrição |
|----------|----------|
| busca.c  |  código de busca sequencial |
| carregamento.c  |  código de carregamento  |
| temporizador.c  |  código de medição de tempo |
| validacao.c  |  código da validação de arquivos  |

## testes/
contém todos os testes dos códigos.

| Arquivos | Descrição |
|----------|----------|
| teste_busca.c  | teste do código de busca sequencial |
| teste_carregamento.c  | teste do código de carregamento  |
| teste_temporizador.c  |  teste do código de medição de tempo  |
| teste_validacao.c  |  teste do código de validação de arquivos  |
| teste_salvamento.c  |  teste do código de salvamento de resultados  |

## main.c
código principal.

*Link do Github*
[Link](https://github.com/AndreKarl019/PI)
