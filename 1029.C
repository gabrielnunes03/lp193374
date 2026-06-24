/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 23/06/2026
Objetivo    : Chamadas da sequencia de fibonacci
Aprendizado : <<treino de recursão>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int chamadas;

int fib(int n) {
    chamadas++;            
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        chamadas = 0;
        int resultado = fib(x);

        // a 1a chamada (a partir do main) nao conta como "chamada recursiva", por isso o -1
        printf("fib(%d) = %d calls = %d\n", x, chamadas - 1, resultado);
    }

    return 0;
}
