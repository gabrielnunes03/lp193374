/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 23/06/2026
Objetivo    : dividir as figurinhas em pilhas e trocar com os amigos
Aprendizado : <<treino de recursão com matemática básica>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int MDC(int a, int b)
{
    return (b == 0) ? a : MDC(b, a % b);
}

int main()
{
    int N, F1, F2;

    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
    {
        scanf("%d %d", &F1, &F2);
        printf("%d\n", MDC(F1, F2));
    }

    return 0;
}
