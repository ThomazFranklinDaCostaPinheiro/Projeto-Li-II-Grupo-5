//
// Created by Thomaz on 12/03/2020.
//

#include "Interface.h"
#include <string.h>
#include <stdio.h>
#include "Dados.h"

void mostrar_tabuleiro(ESTADO estado);

int interpretador(ESTADO *e) {
    char linha[BUF_SIZE];
    char col[2], lin[2];
    if(fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;
    if(strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2) {
        COORDENADA coord = {*col - 'a', *lin - '1'};
        jogar(e, coord);
        mostrar_tabuleiro(e);
    }
    return 1;
}