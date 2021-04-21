//Código por Igor Roiz, 12/2020
/*
A implementação do TipoCelula só requer um construtor genérico vazio que dê um valor neutro
para o TipoItem e faça o ponteiro prox apontar para NULL. Todos os ajustes do TipoCelula,
cónteúdo dos itens e apontadores serão feitos nas classes das estruturas.
*/

#include <iostream>
#include "include/TipoCelula.h"

TipoCelula::TipoCelula(){
    item.setItem(-1);
    prox = NULL;
};