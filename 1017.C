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
