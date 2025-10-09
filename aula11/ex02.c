/* Desenvolva uma solução onde o usuário irá informar até 5 notas, cada nota informada aparecerá a opção "Deseja Sair? (S/N)", caso o usuário digite N o programa continuará até atingir o limite de 5 notas. */

#include <stdio.h>
#define TAM 5
int main() {
    float notas[TAM];
    char sair;
    int cont = 0, i = 0;

    do{
      printf("Informe a nota %d: ", i + 1);
      scanf("%f", &notas[i]);
      printf("Deseja sair? (S/N): ");
      scanf(" %c", &sair);
      i++;
      cont++;
    } while (((sair == 'N' || sair == 'n') && (sair != 'S' || sair != 's')) && cont < TAM);

    return 0;
}