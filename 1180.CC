/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 23/06/2026
Objetivo    : achar o menor e sua posicao
Aprendizado : <<reforco sobre busca em vetor>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int N, numero, menor, posicao;

    scanf("%d", &N);

    scanf("%d", &menor);
    posicao = 0;

    for (int i = 1; i < N; ++i)
    {
        scanf("%d", &numero);

        if (numero < menor)
        {
            menor = numero;
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
