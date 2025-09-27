/*
 * PROGRAMA PARA CALCULAR A DIFERENÇA ENTRE DOIS NÚMEROS
 * 
 * Este programa solicita dois números inteiros ao usuário
 * e calcula a diferença entre eles (primeiro - segundo).
 */

/* Inclui a biblioteca padrão de entrada e saída */
#include <stdio.h>

/*
 * Função principal do programa
 * 
 * int main() - Ponto de entrada do programa
 * Todo programa em C começa a execução pela função main
 * O tipo int indica que a função retorna um valor inteiro ao sistema operacional
 */
int main() {
  /* 
   * Declaração de variáveis
   * int - tipo de dado para armazenar números inteiros
   */
  int num1;  /* Primeiro número a ser informado pelo usuário */
  int num2;  /* Segundo número a ser informado pelo usuário */
  
  /* 
   * printf - Função para exibir texto na tela
   * Solicita ao usuário que digite o primeiro número
   */
  printf("Digite um numero: ");
  
  /*
   * scanf - Função para ler dados do teclado
   * %d - Formato para ler um número inteiro
   * &num1 - O operador & fornece o endereço da variável num1 na memória
   *         para que scanf possa armazenar o valor lido nesse local
   */
  scanf("%d", &num1);
  
  /* Solicita ao usuário que digite o segundo número */
  printf("Digite outro numero: ");
  scanf("%d", &num2);
  
  /*
   * Calcula e exibe a diferença entre os dois números
   * %d - Formato para exibir um número inteiro
   * num1 - num2 - Expressão que calcula a diferença entre os números
   */
  printf("A diferenca entre os dois numeros e: %d", num1 - num2);

  /*
   * return 0 - Indica ao sistema operacional que o programa
   * foi executado com sucesso (0 significa sucesso)
   */
  return 0;
}