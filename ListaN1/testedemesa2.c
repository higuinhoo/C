#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int contador = 0;

    printf("Valores iniciais: a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);

    while (contador < 4) {
        contador++;
        if (a % 2 == 0) {
            b += a;
            c = 2 * b;
            printf("Execucao %d: a=%d b=%d c=%d d=%d e=%d\n", contador, a, b, c, d, e);
        } else if (b > c) {
            a += d;
            e--;
            printf("Execucao %d: a=%d b=%d c=%d d=%d e=%d\n", contador, a, b, c, d, e);
        } else {
            d = a + b + c;
            printf("Execucao %d: a=%d b=%d c=%d d=%d e=%d\n", contador, a, b, c, d, e);
        }
        do {
            if (e > 10) {
                e -= 3;
                printf("Execucao %d: a=%d b=%d c=%d d=%d e=%d\n", contador, a, b, c, d, e);
            } else if (e < 2) {
                e += 3;
                printf("Execucao %d: a=%d b=%d c=%d d=%d e=%d\n", contador, a, b, c, d, e);
            }
            d++;
            printf("Execucao %d: a=%d b=%d c=%d d=%d e=%d\n", contador, a, b, c, d, e);
        } while (d % 3 != 0);
        if (contador == 2) {
            a *= b;
            c = d - e;
            printf("Execucao %d: a=%d b=%d c=%d d=%d e=%d\n", contador, a, b, c, d, e);
        }
    }
    printf("Execucao %d: a=%d b=%d c=%d d=%d e=%d\n", contador, a, b, c, d, e);

    return 0;
}
