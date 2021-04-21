//Código por Igor Roiz, 12/2020
/*
Classe abstrata Pilha, seus métodos são implementados pelas herdeiras, pode ser usada com
pilhas encadeadas ou por vetores
*/
#ifndef PILHA_H
#define PILHA_H

#include "TipoItem.h"

class Pilha{
    public:
        Pilha() {tamanho=0;};
        int getTamanho() {return tamanho;};
        bool Vazia() {return tamanho == 0;};

        virtual void Empilha(TipoItem item) = 0;//Empilhar
        virtual TipoItem Desempilha() = 0;//Desempilhar
        virtual void Limpa() = 0;//Limpar
    
    protected:
        int tamanho;
};

#endif