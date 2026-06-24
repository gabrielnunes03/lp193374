/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 23/06/2026
Objetivo    : fazer um sudoku
Aprendizado : <<reune tudo que aprendemos até agora num projeto mais detalhado>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int valido[10]; // usado para checar se aparecem todos os numeros 1-9

// verifica se um conjunto de 9 valores contem 1-9, cada um uma vez
int grupoValido(int valores[9]) {
    for (int i = 1; i <= 9; i++) {
        valido[i] = 0;
    }
    for (int i = 0; i < 9; i++) {
        int v = valores[i];
        if (v < 1 || v > 9 || valido[v]) {
            return 0; // valor fora do intervalo ou repetido
        }
        valido[v] = 1;
    }
    return 1;
}

int verificaSudoku(int m[9][9]) {
    int linha[9], coluna[9], bloco[9];

    // checa as 9 linhas
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            linha[j] = m[i][j];
        }
        if (!grupoValido(linha)) return 0;
    }

    // checa as 9 colunas
    for (int j = 0; j < 9; j++) {
        for (int i = 0; i < 9; i++) {
            coluna[i] = m[i][j];
        }
        if (!grupoValido(coluna)) return 0;
    }

    // checa os 9 blocos 3x3
    for (int bi = 0; bi < 3; bi++) {
        for (int bj = 0; bj < 3; bj++) {
            int idx = 0;
            for (int i = bi * 3; i < bi * 3 + 3; i++) {
                for (int j = bj * 3; j < bj * 3 + 3; j++) {
                    bloco[idx++] = m[i][j];
                }
            }
            if (!grupoValido(bloco)) return 0;
        }
    }

    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        int m[9][9];
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &m[i][j]);
            }
        }

        printf("Instancia %d\n", k);
        printf(verificaSudoku(m) ? "SIM\n" : "NAO\n");
        printf("\n");
    }

    return 0;
}
