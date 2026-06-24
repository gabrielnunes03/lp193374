#include <stdio.h>

int calcular_maior_collatz(int n, int maior_atual) {
    if (n <= 1) {
        return maior_atual;
    }
    int proximo_n = (n % 2 != 0) ? (3 * n + 1) : (n / 2);

    // Atualiza o maior valor encontrado até agora
    int novo_maior = (proximo_n > maior_atual) ? proximo_n : maior_atual;

    // Chamada recursiva passando o próximo número e o maior valor atualizado
    return calcular_maior_collatz(proximo_n, novo_maior);
}

int main()
{
    int n, resposta;

    while (scanf("%d", &n))
    {
        if (!n)
            break;

        // O valor inicial de 'resposta' é o próprio 'n'
        resposta = calcular_maior_collatz(n, n);

        printf("%d\n", resposta);
    }

    return 0;
}
