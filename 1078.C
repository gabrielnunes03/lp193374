/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 23/06/2026
Objetivo    : Tabuada
Aprendizado : <<<comando "for" >>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (int i = 1; i < 11; ++i)
        printf("%d x %d = %d\n", i, N, i * N);

    return 0;
}
