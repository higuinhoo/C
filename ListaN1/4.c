 #include <stdio.h>

 #define PI 3.14159 // Define a constante PI
 int main() {
    float raio, area; // Declaração das variáveis para armazenar o raio e a área
    
    printf("Digite o raio do circulo: "); // Solicita ao usuário que digite o raio do círculo OBS: achei que faltava algo neste código então fiz esse printf rs.
    scanf("%f", &raio);
    
    area = PI * raio * raio; // Calcula a área do círculo usando a fórmula: área = PI * raio²
    
    printf("Area do circulo: %.2f\n", area); // Exibe o resultado com 2 casas decimais
    
    return 0;
 }