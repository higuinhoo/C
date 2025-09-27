#include <stdio.h>

int main() {
    char nome[100], cpf[15], rua[100], numeroCasa[10], cidade[50], estado[50], cep[10], nascimento[20], tipoSangue[5];
    int idade, numeroSapato;
    float altura;
    printf("==================\nCADASTRO\n==================\n");
    
    printf("Nome completo: ");
    scanf(" %[^\n]", nome);

    printf("CPF (Com pontos e traços): ");
    scanf(" %[^\n]", cpf);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Rua: ");
    scanf(" %[^\n]", rua);

    printf("Numero da casa: ");
    scanf(" %[^\n]", numeroCasa);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Estado: ");
    scanf(" %[^\n]", estado);

    printf("CEP (XXXXX-XXX): ");
    scanf(" %[^\n]", cep);

    printf("Data nascimento: ");
    scanf(" %[^\n]", nascimento);

    printf("Numero sapato: ");
    scanf("%d", &numeroSapato);

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Tipo sanguineo: ");
    scanf(" %[^\n]", tipoSangue);

    int idade10 = idade + 10;

    printf("\n==================\nDados Informados\n==================\n");
    printf("Nome completo: %s\n", nome);
    printf("CPF: %s\n", cpf);
    printf("Idade: %d\n", idade);
    printf("Rua: %s\n", rua);
    printf("Numero da casa: %s\n", numeroCasa);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("CEP: %s\n", cep);
    printf("Data nascimento: %s\n", nascimento);
    printf("Numero sapato: %d\n", numeroSapato);
    printf("Idade em 10 anos: %d\n", idade10);
    printf("Altura: %.2f\n", altura);
    printf("Tipo sanguineo: %s\n", tipoSangue);


  return 0;
}