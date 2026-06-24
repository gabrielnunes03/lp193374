/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 23/06/2026
Objetivo    : Calcular quanto tempo durou o jogo.
Aprendizado : <<<função básica e se atentar a detalhes como o ciclo de 24 horas>>>
-------------------------------------------------------------------------- */
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
