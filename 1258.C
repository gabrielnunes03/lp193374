/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 23/06/2026
Objetivo    : Separar lista sobre tamanho e relacionar com a cor do logo.
Aprendizado : <<<Aprende-se como usar o comando structs>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

struct Camiseta {
    char nome[100];
    char cor[10];
    char tamanho[10];
};

int main() {
    int n;
    int primeiro = 1;

    while (scanf("%d", &n) == 1 && n != 0) {
        struct Camiseta lista[60];

        for (int i = 0; i < n; i++) {
            scanf(" %[^\n]", lista[i].nome);          // le o nome
            scanf(" %s %s", lista[i].cor, lista[i].tamanho);
        }

        // cor (crescente), depois tamanho (decrescente), depois nome (crescente)
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                int trocar = 0;
                int cmpCor = strcmp(lista[j].cor, lista[j + 1].cor);

                if (cmpCor > 0) {
                    trocar = 1;
                } else if (cmpCor == 0) {
                    int cmpTam = strcmp(lista[j].tamanho, lista[j + 1].tamanho);
                    if (cmpTam < 0) {
                        trocar = 1;
                    } else if (cmpTam == 0) {
                        if (strcmp(lista[j].nome, lista[j + 1].nome) > 0) {
                            trocar = 1;
                        }
                    }
                }

                if (trocar) {
                    struct Camiseta temp = lista[j];
                    lista[j] = lista[j + 1];
                    lista[j + 1] = temp;
                }
            }
        }

        if (!primeiro) {
            printf("\n");
        }
        primeiro = 0;

        for (int i = 0; i < n; i++) {
            printf("%s %s %s\n", lista[i].cor, lista[i].tamanho, lista[i].nome);
        }
    }

    return 0;
}
