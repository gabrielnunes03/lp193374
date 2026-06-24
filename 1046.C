#include <stdio.h>

int calcularDuracao(int inicio, int fim) {
    if (fim > inicio) {
        return fim - inicio;            // termina no mesmo dia
    } else {
        return 24 - inicio + fim;       // termina no dia seguinte (ou exatamente 24h, se inicio == fim)
    }
}

int main() {
    int inicio, fim;

    scanf("%d %d", &inicio, &fim);

    int duracao = calcularDuracao(inicio, fim);

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
