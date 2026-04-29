/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2758
Data        : 29/04/2026
Objetivo    : Mexer com numeros reais.
Aprendizado : <<<Aprender como funciona float, double e suas características>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    // 1 e 2. Variáveis de precisão simples (float) e dupla (double)
    float a, b;
    double c, d;

    // 3, 4, 5 e 6. Leitura dos números
    // O scanf lê os valores independentemente da quantidade de casas decimais na entrada.
    scanf("%f %f %lf %lf", &a, &b, &c, &d);

    // 7. Impressão A e B (padrão)
    printf("A = %f, B = %f\n", a, b);

    // 8. Impressão C e D (padrão)
    printf("C = %lf, D = %lf\n", c, d);

    // 9. A e B com uma casa decimal
    printf("A = %.1f, B = %.1f\n", a, b);

    // 10. C e D com uma casa decimal
    printf("C = %.1lf, D = %.1lf\n", c, d);

    // 11. A e B com duas casas decimais
    printf("A = %.2f, B = %.2f\n", a, b);

    // 12. C e D com duas casas decimais
    printf("C = %.2lf, D = %.2lf\n", c, d);

    // 13. A e B com três casas decimais
    printf("A = %.3f, B = %.3f\n", a, b);

    // 14. C e D com três casas decimais
    printf("C = %.3lf, D = %.3lf\n", c, d);

    // 15. A e B em notação científica (E) com três casas
    printf("A = %.3E, B = %.3E\n", a, b);

    // 16. C e D em notação científica (E) com três casas
    printf("C = %.3E, D = %.3E\n", c, d);

    // 17. A e B apenas parte inteira
    printf("A = %.0f, B = %.0f\n", a, b);

    // 18. C e D apenas parte inteira
    printf("C = %.0lf, D = %.0lf\n", c, d);

    return 0;
}
