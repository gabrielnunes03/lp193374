#include <stdio.h>

int main() {
    int A, B, C;

    // 1. Leitura dos dados
    while (scanf("%d %d %d", &A, &B, &C) != EOF) {
        
        // 2. Impressão padrão (Procedimento 5)
        // Exemplo: A = 123, B = 45, C = 6
        printf("A = %d, B = %d, C = %d\n", A, B, C);

        // 3. Justificado à direita com 10 espaços (%10d)
        printf("A = %10d, B = %10d, C = %10d\n", A, B, C);

        // 4. Preenchido com zeros à esquerda com 10 dígitos (%010d)
        printf("A = %010d, B = %010d, C = %010d\n", A, B, C);

        // 5. Justificado à esquerda com 10 espaços (%-10d)
        printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);
    }

    return 0;
}
