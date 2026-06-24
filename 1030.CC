/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 23/06/2026
Objetivo    : formar os grupos de suicidio (que pesado kkkkkk)
Aprendizado : <<mesclagem de if com for>>>
-------------------------------------------------------------------------- */
#include <stdio.h>

int sobrevivente(int n, int k){
    if(n == 1)  return 0;
    return (sobrevivente(n - 1, k) + k) % n;
}

int main(){
    int NC, n, k;

    scanf("%d", &NC);

    for(int i = 1; i <= NC; ++i){
        scanf("%d %d", &n, &k);

        printf("Case %d: %d\n", i, sobrevivente(n, k) + 1);
    }

    return 0;
}
