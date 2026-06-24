/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Gabriel Nunes de Abreu de Lima Moraes>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 29/04/2026
Objetivo    : Sentenca dancante
Aprendizado : <<<rever strings>>>
-------------------------------------------------------------------------- */
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    int n, maiuscula;
    char sentenca[51];

    while(gets(sentenca) != NULL){
        maiuscula = 1;
        n = strlen(sentenca);

        for(int i = 0; i < n; ++i){
            if(!isalpha(sentenca[i]))  continue;

            if(maiuscula)   sentenca[i] = toupper(sentenca[i]);
            else            sentenca[i] = tolower(sentenca[i]);
            maiuscula = 1 - maiuscula;
        }

        printf("%s\n", sentenca);
    }

    return 0;
}
