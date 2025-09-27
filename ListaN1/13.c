#include <stdio.h>

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d", i);
            if (i % 7 == 0) {
                printf(" M7");
            }
            printf("\n");
        }
    }
    return 0;
}
