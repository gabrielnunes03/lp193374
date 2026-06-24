/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 23/06/2026
Objetivo    : Fazer uma matriz, sem usar o operador.
Aprendizado : <<<Aprende como se fazer uma matriz simples usando apenas 2 for, sem usando a operação e fazendo direto>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i + j == n - 1) {
                    printf("2");
                } else if (i == j) {
                    printf("1");
                } else {
                    printf("3");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
