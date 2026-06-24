/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : jogo de sudoku
Data        : 23/06/2026
Objetivo    : fazer um código que pode resolver um jogo de sudoku
Aprendizado : <<reune tudo que aprendemos até agora num projeto BEM mais detalhado>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int tabuleiro[9][9];
int fixo[9][9]; // 1 se a celula e uma "pista" original (nao pode ser sobrescrita)

void imprimeTabuleiro() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (tabuleiro[i][j] == 0) {
                printf("_ ");
            } else {
                printf("%d ", tabuleiro[i][j]);
            }
            if (j == 2 || j == 5) {
                printf("| ");
            }
        }
        printf("\n");
        if (i == 2 || i == 5) {
            printf("------+-------+------\n");
        }
    }
}

int movimentoValido(int linha, int col, int valor) {
    for (int j = 0; j < 9; j++) {
        if (j != col && tabuleiro[linha][j] == valor) return 0;
    }
    for (int i = 0; i < 9; i++) {
        if (i != linha && tabuleiro[i][col] == valor) return 0;
    }
    int bi = (linha / 3) * 3;
    int bj = (col / 3) * 3;
    for (int i = bi; i < bi + 3; i++) {
        for (int j = bj; j < bj + 3; j++) {
            if ((i != linha || j != col) && tabuleiro[i][j] == valor) return 0;
        }
    }
    return 1;
}

int tabuleiroCompleto() {
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            if (tabuleiro[i][j] == 0) return 0;
    return 1;
}

int main() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &tabuleiro[i][j]);
            fixo[i][j] = (tabuleiro[i][j] != 0);
        }
    }

    while (1) {
        imprimeTabuleiro();

        if (tabuleiroCompleto()) {
            printf("Parabens! Voce completou o Sudoku corretamente!\n");
            break;
        }

        int linha, col, valor;
        printf("Digite linha coluna valor (1-9), ou 0 0 0 para sair: ");
        if (scanf("%d %d %d", &linha, &col, &valor) != 3) break;

        if (linha == 0 && col == 0 && valor == 0) {
            printf("Saindo do jogo.\n");
            break;
        }

        linha--; col--;

        if (linha < 0 || linha > 8 || col < 0 || col > 8 || valor < 1 || valor > 9) {
            printf("Entrada invalida! Linha e coluna de 1 a 9, valor de 1 a 9.\n");
            continue;
        }
        if (fixo[linha][col]) {
            printf("Essa celula e uma pista original, nao pode ser alterada!\n");
            continue;
        }
        if (!movimentoValido(linha, col, valor)) {
            printf("Movimento invalido! Esse valor conflita com a linha, coluna ou bloco.\n");
            continue;
        }

        tabuleiro[linha][col] = valor;
    }

    return 0;
}
