#include <stdio.h>

int main() {

    int mes_atual, mes_anterior, consumo;
    float valor_fatura;
    const float PRECO_KWH = 0.75;
    
    printf("Digite a leitura do mes atual (kWh): ");
    scanf("%d", &mes_atual);
    
    printf("Digite a leitura do mes anterior (kWh): ");
    scanf("%d", &mes_anterior);
    
    consumo = mes_atual - mes_anterior;
    
    valor_fatura = consumo * PRECO_KWH;
    
    printf("\n=== FATURA DE ENERGIA ===\nConsumo: %d kWh\nValor da fatura: R$ %.2f\n", consumo, valor_fatura);
    
    return 0;
}