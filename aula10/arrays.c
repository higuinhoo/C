#include <stdio.h>

int main() {
    float notas[5], soma = 0, media;
    int i;

    for( i=0; i<5; i++){
        printf("informe a nota: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    
    media = soma /5;
    printf("A media das notas e: %.2f\n", media);
    
    return 0;
}