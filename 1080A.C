/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 29/04/2026
Objetivo    : Achar o maior valor e a sua posição dentre 100 números.
Aprendizado : <<<Aprender a usar métodos que economizem memória para resolver problemas>>>
1080A : Sem uso de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int valor, maior = -1, posicao = 0;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &valor);

        // Se o valor atual for maior que o maior já registrado
        if (valor > maior) {
            maior = valor;
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}
