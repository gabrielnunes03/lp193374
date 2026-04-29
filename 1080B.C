/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 29/04/2026
Objetivo    : Achar o maior valor e a sua posição dentre 100 números.
Aprendizado : <<<Vetores permitem você utilizar o resultado com facilidade para outras coisas no futuro, aprendi a pensar mais de um jeito para resolver o problema>>>
1080B : (com “int V[100];”)
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int V[100];
    int maior, posicao;

    // Passo 1: Preencher o vetor
    for (int i = 0; i < 100; i++) {
        scanf("%d", &V[i]);
    }

    // Passo 2: Localizar o maior valor
    // Começamos assumindo que o primeiro (índice 0) é o maior
    maior = V[0];
    posicao = 1; 

    for (int i = 1; i < 100; i++) {
        if (V[i] > maior) {
            maior = V[i];
            posicao = i + 1; // +1 porque a contagem humana começa em 1, mas o vetor em 0
        }
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}
