# include <stdio.h>

int main(){
  float bruto, liquido;
  int meses;
  const float juros = 0.05;

  printf("----------------------\nCALCULO DE EMPRESTIMO\n--------------------\n");

  printf("Valor do emprestimo desejado: ");
  scanf("%f", &bruto);

  printf("Numero de meses para pagar (1-48): ");
  scanf("%d", &meses);

  if (meses < 1 || meses > 48) {
    printf("Numero de meses invalido. Deve ser entre 1 e 48.\n");
    return 1;
  }

  liquido = bruto * (1 + juros * meses);

  printf("Valor solicitado: R$ %.2f\n", bruto);
  printf("Prazo (meses): %d\n", meses);
  printf("Taxa de juros mensal: %.2f%%\n", juros * 100);
  printf("Valor total a pagar: R$ %.2f\n", liquido);
  printf("Valor mensal liquido: R$ %.2f\n", liquido / meses);
  printf("Juros total: R$ %.2f\n", liquido - bruto);
  return 0;
}