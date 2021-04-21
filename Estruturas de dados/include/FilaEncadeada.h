//Código por Igor Roiz, 12/2020
/*
Classe da Fila Encadeada que herda a classe Fila
*/

#ifndef FILAENCADEADA_H
#define FILAENCADEADA_H

#include "Fila.h"
#include "TipoCelula.h"

class FilaEncadeada : public Fila
{
    private:
        TipoCelula* frente;
        TipoCelula* tras;
    public:
        FilaEncadeada();
        ~FilaEncadeada();

        void enfileira(TipoItem item); //Insere item no fim da fila
        TipoItem desenfileira(); //Remove e retorna item no inicio da fila
        void imprime(); //Imprime toda a fila em ordem
        void limpa(); // limpa a fila
};

#endif