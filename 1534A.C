#include <stdio.h>

void imprimeMatriz(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int valor;
            if (i + j == n - 1) {
                valor = 2;        // diagonal anti-principal (tem prioridade)
            } else if (i == j) {
                valor = 1;        // diagonal principal
            } else {
                valor = 3;        // resto
            }
            printf("%d", valor);
        }
        printf("\n");
    }
}

int main() {
    int n;
    while (scanf("%d", &n) == 1) {   // le N enquanto houver entrada (EOF)
        imprimeMatriz(n);
    }
    return 0;
}
