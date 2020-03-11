//
// Created by danie on 11/03/2020.
//

#include <stdio.h>
#include <stdlib.h>

typedef enum {VAZIO, BRANCA, PRETA} CASA;
typedef struct {
    int coluna;
    int linha;
} COORDENADA;
typedef struct {
    COORDENADA jogador1;
    COORDENADA jogador2;
} JOGADA;
typedef JOGADA JOGADAS[32];
typedef struct {
    CASA tab[8][8];
    COORDENADA ultima_jogada;
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
} ESTADO;


ESTADO *inicializar_estado() {
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
    e -> tab[0][0] = VAZIO;
    e -> tab[0][1] = VAZIO;
    e -> tab[0][2] = VAZIO;
    e -> tab[0][3] = VAZIO;
    e -> tab[0][4] = VAZIO;
    e -> tab[0][5] = VAZIO;
    e -> tab[0][6] = VAZIO;
    e -> tab[0][7] = VAZIO;
    e -> tab[1][0] = VAZIO;
    e -> tab[1][1] = VAZIO;
    e -> tab[1][2] = VAZIO;
    e -> tab[1][3] = VAZIO;
    e -> tab[1][4] = VAZIO;
    e -> tab[1][5] = VAZIO;
    e -> tab[1][6] = VAZIO;
    e -> tab[1][7] = VAZIO;
    e -> tab[2][0] = VAZIO;
    e -> tab[2][1] = VAZIO;
    e -> tab[2][2] = VAZIO;
    e -> tab[2][3] = VAZIO;
    e -> tab[2][4] = VAZIO;
    e -> tab[2][5] = VAZIO;
    e -> tab[2][6] = VAZIO;
    e -> tab[2][7] = VAZIO;
    e -> tab[3][0] = VAZIO;
    e -> tab[3][1] = VAZIO;
    e -> tab[3][2] = VAZIO;
    e -> tab[3][3] = VAZIO;
    e -> tab[3][4] = VAZIO;
    e -> tab[3][5] = VAZIO;
    e -> tab[3][6] = VAZIO;
    e -> tab[3][7] = VAZIO;
    e -> tab[4][0] = VAZIO;
    e -> tab[4][1] = VAZIO;
    e -> tab[4][2] = VAZIO;
    e -> tab[4][3] = VAZIO;
    e -> tab[4][4] = VAZIO;
    e -> tab[4][5] = PRETA;
    e -> tab[4][6] = VAZIO;
    e -> tab[4][7] = VAZIO;
    e -> tab[5][0] = VAZIO;
    e -> tab[5][1] = VAZIO;
    e -> tab[5][2] = VAZIO;
    e -> tab[5][3] = VAZIO;
    e -> tab[5][4] = VAZIO;
    e -> tab[5][5] = VAZIO;
    e -> tab[5][6] = VAZIO;
    e -> tab[5][7] = VAZIO;
    e -> tab[6][0] = VAZIO;
    e -> tab[6][1] = VAZIO;
    e -> tab[6][2] = VAZIO;
    e -> tab[6][3] = VAZIO;
    e -> tab[6][4] = VAZIO;
    e -> tab[6][5] = VAZIO;
    e -> tab[6][6] = VAZIO;
    e -> tab[6][7] = VAZIO;
    e -> tab[7][0] = VAZIO;
    e -> tab[7][1] = VAZIO;
    e -> tab[7][2] = VAZIO;
    e -> tab[7][3] = VAZIO;
    e -> tab[7][4] = VAZIO;
    e -> tab[7][5] = VAZIO;
    e -> tab[7][6] = VAZIO;
    e -> tab[7][7] = VAZIO;
    e -> ultima_jogada ;
    e -> jogador_atual = 1;
    e -> num_jogadas = 0;
    return e;
}
