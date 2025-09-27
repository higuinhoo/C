#include <stdio.h>

int main() {
    char nome[255];
    int idade;
    char status;
    float altura;
    char email[255];
    double salario;

    printf("---------- C A D A S T R O ----------\n");

    printf("Digite seu Nome: ");
    scanf("%254s", nome);

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    printf("Digite seu Status (a ou i): ");
    scanf(" %c", &status); // espaço antes do %c ignora enter anterior

    printf("Digite sua Altura: ");
    scanf("%f", &altura);

    printf("Digite seu e-mail: ");
    scanf("%254s", email);

    printf("Digite Seu Salario: ");
    scanf("%lf", &salario);

    printf("----------- R E S U L T A D O -----------\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Status: %c\n", status);
    printf("Altura: %.2f\n", altura);
    printf("E-mail: %s\n", email);
    printf("Salario: %.2lf\n", salario);
    printf("-----------------------------------------\n");

    return 0;
}
