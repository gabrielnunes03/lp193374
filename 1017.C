/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 23/06/2026
Objetivo    : Calcular quantos litros de combustivel é usado.
Aprendizado : <<<Aprender a usar float, e transformar funções da matemática em código>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

float calcularLitros(int tempo, int velocidade) {
    float distancia = tempo * velocidade;   // distancia = tempo x velocidade
    float litros = distancia / 12;           // o carro faz 12 km por litro
    return litros;
}

int main() {
    int tempo, velocidade;

    scanf("%d %d", &tempo, &velocidade);

    float litros = calcularLitros(tempo, velocidade);

    printf("%.3f\n", litros);

    return 0;
}
