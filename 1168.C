/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 23/06/2026
Objetivo    : ajudar a achar a quantidade de leds necessários.
Aprendizado : <<<Aprende-se sobre o comando switch>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int contaLeds(char digito) {
    switch (digito) {
        case '0':
        case '6':
        case '9':
            return 6;
        case '1':
            return 2;
        case '2':
        case '3':
        case '5':
            return 5;
        case '4':
            return 4;
        case '7':
            return 3;
        case '8':
            return 7;
    }
    return 0;
}

int main() {
    int n;
    char v[105];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", v);
        int total = 0;
        int tam = strlen(v);
        for (int j = 0; j < tam; j++) {
            total += contaLeds(v[j]);
        }
        printf("%d leds\n", total);
    }

    return 0;
}
