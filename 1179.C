/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 23/06/2026
Objetivo    : Preencher vetores.
Aprendizado : <<<aprende a visualizar e mexer de maneira profunda com vetores>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int par[5], impar[5];
    int countPar = 0, countImpar = 0;
    int valor;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            par[countPar] = valor;
            countPar++;
            if (countPar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                countPar = 0;  // "esvazia" o vetor pra reaproveitar
            }
        } else {
            impar[countImpar] = valor;
            countImpar++;
            if (countImpar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                countImpar = 0;
            }
        }
    }

    // terminou a leitura: imprime o que restou, IMPAR primeiro
    for (int j = 0; j < countImpar; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for (int j = 0; j < countPar; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
