/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 29/04/2026
Objetivo    : Ler três valores inteiros e mostrar a soma.
Aprendizado : <<<Aprende a utilizar váriaveis, o comando scanf e contas básicas usando a linguagem C>>>
-------------------------------------------------------------------------- */
#include <stdlib.h>

int main() {
    int a, b, c, maiorAB, maiorFinal;

    scanf("%d %d %d", &a, &b, &c);

    maiorAB = (a + b + abs(a - b)) / 2;
    maiorFinal = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior\n", maiorFinal);

    return 0;
}
