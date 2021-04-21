//Código por Igor Roiz, 12/2020
/*
Classe da Pilha Encadeada que herda a classe Pilha
*/

#ifndef PILHAENCADEADA_H
#define PILHAENCADEADA_H

#include "Pilha.h"
#include "TipoCelula.h"

using namespace std;

class PilhaEncadeada : public Pilha{
    
    public:
        PilhaEncadeada();
        virtual ~PilhaEncadeada();

        void empilha(TipoItem item);
        TipoItem desempilha();
        void imprime();
        void limpa();
    private:
        TipoCelula* topo;
};

#endif