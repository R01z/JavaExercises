//Código por Igor Roiz, 12/2020
/*
Classe abstrata Fila, seus métodos são implementados pelas herdeiras, pode ser usada com
filas encadeadas ou por vetores
*/
#ifndef FILA_H
#define FILA_H

#include "TipoItem.h"

class Fila
{
    public:
        Fila() {tamanho = 0;};
        int getTamanho() {return tamanho;};
        bool vazia() {return (tamanho == 0);};

        virtual void enfileira(TipoItem item) = 0;
        virtual TipoItem desenfileira() = 0;
        virtual void limpa() = 0;

    protected:
        int tamanho;
};


#endif