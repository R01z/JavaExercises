//Código por Igor Roiz, 12/2020
/*
A classe TipoCelula é o que compõe as estruturas, células tem por objetivo armazenar os itens,
a implementação é simples, possuem um objeto do TipoItem e um ponteiro para a próxima célula.
Essa classe é usada para Listas, Pilhas e Filas
*/

#ifndef TIPOCELULA_H
#define TIPOCELULA_H

#include "TipoItem.h"

class TipoCelula
{
    private:
        TipoItem item;
        TipoCelula *prox;
    public:
        TipoCelula();

    friend class ListaEncadeada;
    friend class FilaEncadeada;
    friend class PilhaEncadeada;   
};


#endif
