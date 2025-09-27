/*
 * PROGRAMA PARA CALCULAR IDADE FUTURA
 * 
 * Este programa solicita a idade atual do usuário
 * e calcula qual será a idade daqui a 10 anos.
 */

/* Inclui a biblioteca padrão de entrada e saída */
#include <stdio.h>

/*
 * Função principal do programa
 * 
 * int main() - Ponto de entrada do programa
 * Todo programa em C começa a execução pela função main
 */
int main() {
  /* 
   * Declaração e inicialização de variável
   * int idade = 0 - Cria uma variável do tipo inteiro chamada 'idade'
   * e inicializa com o valor 0
   */
  int idade = 0;  /* Armazena a idade informada pelo usuário */
  
  /* Solicita ao usuário que digite sua idade */
  printf("Digite sua idade: ");
  
  /* 
   * Lê a idade digitada pelo usuário
   * scanf("%d", &idade) - Lê um número inteiro e armazena na variável idade
   * %d - Formato para ler um número inteiro
   * &idade - Endereço da variável idade na memória
   */
  scanf("%d", &idade);

  /* 
   * Calcula e exibe a idade daqui a 10 anos
   * idade + 10 - Expressão que soma 10 à idade atual
   * %d - Formato para exibir um número inteiro
   * \n - Caractere de nova linha (quebra de linha)
   */
  printf("A idade em 10 anos sera: %d\n", idade + 10);

  /* Retorna 0 para indicar que o programa foi executado com sucesso */
  return 0;
}