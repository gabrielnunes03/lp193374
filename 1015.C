/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 23/06/2026
Objetivo    : calculo de distancia entre pontos.
Aprendizado : <<<Usar double>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", distancia);

    return 0;
}
