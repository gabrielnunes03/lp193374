/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 23/06/2026
Objetivo    : Fazer uma matriz.
Aprendizado : <<<Aprende como se fazer uma matriz simples usando apenas 2 for>>>
-------------------------------------------------------------------------- */
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
