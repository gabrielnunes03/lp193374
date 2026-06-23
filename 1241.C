/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 23/06/2026
Objetivo    : Ver se encaixa o valor final de B em A.
Aprendizado : <<<String Recursivo>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

// string recursivo
int tamanho(char s[]) {
    if (s[0] == '\0') {
        return 0;
    }
    return 1 + tamanho(s + 1);
}

// compara os ultimos caracteres de A com B, de tras pra frente
// i = posicao atual em A, j = posicao atual em B
int comparaFim(char A[], char B[], int i, int j) {
    if (j < 0) {
        return 1;   // chegou ao inicio de B, tudo bateu = encaixa
    }
    if (A[i] != B[j]) {
        return 0;   // achou diferenca = nao encaixa
    }
    return comparaFim(A, B, i - 1, j - 1);
}

int encaixa(char A[], char B[]) {
    int tamA = tamanho(A);
    int tamB = tamanho(B);

    if (tamB > tamA) {
        return 0;   // B maior que A nunca encaixa
    }

    return comparaFim(A, B, tamA - 1, tamB - 1);
}

int main() {
    int n;
    scanf("%d", &n);   // le quantos casos de teste tem

    char A[1005], B[1005];

    for (int t = 0; t < n; t++) {
        scanf("%s %s", A, B);   // le os dois numeros do caso

        if (encaixa(A, B)) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }
    }

    return 0;
}
