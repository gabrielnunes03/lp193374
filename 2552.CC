/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 23/06/2026
Objetivo    : Fazer um mine sweeper mineiro (com pão de queijo kkkkkkkk).
Aprendizado : <<<reforçando matriz>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int matriz[102][102];

int paesDeQueijoVizinhos(int i, int j)
{
    return matriz[i - 1][j] + matriz[i + 1][j] + matriz[i][j - 1] + matriz[i][j + 1];
}

int main()
{
    int N, M;

    while (scanf("%d %d", &N, &M) != EOF)
    {
        for (int i = 0; i <= N + 1; ++i)
        {
            for (int j = 0; j <= M + 1; ++j)
            {
                matriz[i][j] = 0;
            }
        }

        for (int i = 1; i <= N; ++i)
        {
            for (int j = 1; j <= M; ++j)
            {
                scanf("%d", &matriz[i][j]);
            }
        }

        for (int i = 1; i <= N; ++i)
        {
            for (int j = 1; j <= M; ++j)
            {
                if (matriz[i][j] == 0)
                {
                    printf("%d", paesDeQueijoVizinhos(i, j));
                }
                else
                {
                    printf("9");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
