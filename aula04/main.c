/*
 * PROGRAMA PARA MANIPULAÇÃO DE NOMES
 * 
 * Este programa demonstra diferentes formas de ler e exibir nomes:
 * 1. Lê nome e sobrenome separadamente
 * 2. Lê o nome completo de uma vez
 */

/* Inclui a biblioteca padrão de entrada e saída */
#include <stdio.h>

/*
 * Função principal do programa
 */
int main() {
  /* 
   * Declaração de arrays de caracteres (strings)
   * char nome[255] - Cria um array de 255 caracteres para armazenar o nome
   * O tamanho 255 é escolhido para garantir espaço suficiente para nomes longos
   */
  char nome[255];        /* Armazena o primeiro nome */
  char sobrenome[255];   /* Armazena o sobrenome */
  char nome_completo[255]; /* Armazena o nome completo */

  /* Solicita e lê o primeiro nome */
  printf("Nome: ");
  scanf("%s", nome);  /* %s lê uma string até encontrar espaço ou nova linha */
  
  /* Solicita e lê o sobrenome */
  printf("Sobrenome: ");
  scanf("%s", sobrenome);
  
  /* 
   * Exibe o nome completo concatenando as duas strings
   * %s %s - Formato para exibir duas strings separadas por espaço
   * \n - Caractere de nova linha
   */
  printf("Nome Completo: %s %s\n", nome, sobrenome);
  
  /* 
   * fflush(stdin) - Limpa o buffer de entrada
   * Isso é necessário porque o scanf anterior pode deixar caracteres
   * no buffer que interfeririam na próxima leitura
   */
  fflush(stdin); // Limpa o buffer do teclado
  
  /* Solicita o nome completo de uma vez */
  printf("------------------------------\nInforme Nome completo: ");
  
  /* 
   * scanf(" %[^\n]", nome_completo) - Lê uma string até encontrar nova linha
   * %[^\n] - Formato especial que lê todos os caracteres até encontrar \n
   * O espaço antes de % ignora espaços em branco iniciais
   */
  scanf(" %[^\n]", nome_completo);
  printf("------------------------------\n");

  /* Exibe o nome completo informado */
  printf("Nome Informado: %s\n", nome_completo);
  
  /* Retorna 0 para indicar que o programa foi executado com sucesso */
  return 0;
}
