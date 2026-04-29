/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 29/04/2026
Objetivo    : Achar os números impares entre dois números e fazer a soma de todos eles.
Aprendizado : <<<Ensina sobre if, else,for, que seria a estrutura de laços e como eles funcionam >>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int X, Y, soma = 0;
    int inicio, fim;

    // 1. Leitura dos valores
    scanf("%d %d", &X, &Y);

    // 2. Definir quem é o menor e quem é o maior
    // O intervalo deve ser sempre do menor para o maior para o laço funcionar
    if (X < Y) {
        inicio = X;
        fim = Y;
    } else {
        inicio = Y;
        fim = X;
    }

    // 3. Percorrer o intervalo
    // Começamos em inicio + 1 e vamos até fim - 1
    for (int i = inicio + 1; i < fim; i++) {
        // 4. Verificar se o número é ímpar
        // Um número é ímpar se o resto da divisão por 2 for diferente de 0
        if (i % 2 != 0) {
            soma += i;
        }
    }

    // 5. Mostrar o resultado
    printf("%d\n", soma);

    return 0;
}
