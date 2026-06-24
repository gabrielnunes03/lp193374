/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 23/06/2026
Objetivo    : Criptografar textos.
Aprendizado : <<<ASCII>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

void desloca3(char s[], int i) {
    if (s[i] == '\0') {
        return;
    }
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
        s[i] = s[i] + 3;
    }
    desloca3(s, i + 1);
}

void inverte(char s[], int i, int j) {
    if (i >= j) {
        return;
    }
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    inverte(s, i + 1, j - 1);
}

void deslocaMenos1(char s[], int i, int inicio, int tam) {
    if (i >= tam) {
        return;
    }
    if (i >= inicio) {
        s[i] = s[i] - 1;
    }
    deslocaMenos1(s, i + 1, inicio, tam);
}

void criptografa(char s[]) {
    int tam = strlen(s);
    desloca3(s, 0);
    inverte(s, 0, tam - 1);
    deslocaMenos1(s, 0, tam / 2, tam);
}

int main() {
    int n;
    char linha[1005];

    while (scanf("%d", &n) == 1) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { } // limpa o resto da linha do N

        for (int t = 0; t < n; t++) {
            if (fgets(linha, sizeof(linha), stdin) == NULL) {
                break;
            }
            int len = strlen(linha);
            while (len > 0 && (linha[len - 1] == '\n' || linha[len - 1] == '\r')) {
                linha[len - 1] = '\0';
                len--;
            }
            criptografa(linha);
            printf("%s\n", linha);
        }
    }

    return 0;
}
