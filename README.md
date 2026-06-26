# PROJETO INTEGRADOR - GRUPO 2 - FASE 2

Projeto acadêmico desenvolvido por estudantes de Ciência da Computação com o intuito de desenvolver uma base experimental para análise de desempenho de algoritmos de busca utilizando datasets.
O foco da fase atual é utilizar a baseline de referência comparativa desenvolvida na primeira fase na comparação com os resultados da fase 2.

## Alunos

| Nome | Matrícula |
|----------|----------|
| André Lopes Solla Karl  |  2422130012  |
| Emille Souza Brault | 2422130015 |
| João Pedro Oliveira Braga | 2422130019  |

## Funcionamento
* Ler o CSV inserido em data/dataset.csv

* Popular o vetor.

* Executar as buscas sequenciais.

* Executar a busca na tabela hash.

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
| dataset.csv |  dataset com 100003 entradas  |

## include/
contém as headers a serem utilizadas no programa.

## include/fase1
contém as headers da primeira fase do programa.

| Arquivos | Descrição |
|----------|----------|
| busca_vetor.h |  header com as funções de busca da busca sequencial   |
| carregamento_vetor.h |  header com as funções de carregamento da busca sequencial  |
| validacao.h |  header com as funções de validação  |

## include/fase2
contém as headers da segunda fase do programa.

| Arquivos | Descrição |
|----------|----------|
| busca.h |  header com as funções da tabela hash   |

## include/global
contém as headers a serem utilizadas em ambas as fases do programa.

| Arquivos | Descrição |
|----------|----------|
| temporizador.h |  header com as funções de temporização  |

## src/
contém todos os arquivos .c com exceção da main.

## src/fase1
contém os arquivos .c da primeira fase do programa.

| Arquivos | Descrição |
|----------|----------|
| busca_vetor.c  |  código de busca sequencial |
| carregamento_vetor.c  |  código de carregamento da busca sequencial |
| validacao_vetor.c  |  código da validação de arquivos da busca sequencial |

## src/fase2
contém os arquivos.c da segunda fase do programa.

| Arquivos | Descrição |
|----------|----------|
| hash.c | código da tabela hash   |

## src/global
contém os arquivos .c a serem usados em ambas as fases do programa.

| Arquivos | Descrição |
|----------|----------|
| temporizador.c  |  código de medição de tempo |

## testes/
contém todos os testes dos códigos.

## testes/fase1
contém todos os testes dos códigos da primeira fase.

| Arquivos | Descrição |
|----------|----------|
| teste_busca.c  | teste do código de busca sequencial |
| teste_carregamento.c  | teste do código de carregamento  |
| teste_temporizador.c  |  teste do código de medição de tempo  |
| teste_validacao.c  |  teste do código de validação de arquivos  |
| teste_salvamento.c  |  teste do código de salvamento de resultados  |

## testes/fase2
contém todos os testes dos códigos da segunda fase.

| Arquivos | Descrição |
|----------|----------|
| teste_hash.c  | teste do código da tabela hash |

## main_fase1.c
código principal da fase 1.

## main_fase2.c
código principal da fase 2.


*Link do Github*
[Link](https://github.com/AndreKarl019/PI)
