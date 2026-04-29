/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2757
Data        : 29/04/2026
Objetivo    : Movimentar numeros inteiros.
Aprendizado : <<<Ensina a mexer com a posição dos números inteiros>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int A, B, C;

    // 1. Leitura dos dados
    while (scanf("%d %d %d", &A, &B, &C) != EOF) {
        
        // 2. Impressão padrão (Procedimento 5)
        // Exemplo: A = 123, B = 45, C = 6
        printf("A = %d, B = %d, C = %d\n", A, B, C);

        // 3. Justificado à direita com 10 espaços (%10d)
        printf("A = %10d, B = %10d, C = %10d\n", A, B, C);

        // 4. Preenchido com zeros à esquerda com 10 dígitos (%010d)
        printf("A = %010d, B = %010d, C = %010d\n", A, B, C);

        // 5. Justificado à esquerda com 10 espaços (%-10d)
        printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);
    }

    return 0;
}
