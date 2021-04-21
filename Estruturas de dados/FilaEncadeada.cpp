//Código por Igor Roiz, 12/2020
/*
Implementação da fila encadeada
*/

#include <iostream>
#include "include/FilaEncadeada.h"

FilaEncadeada::FilaEncadeada() : Fila(){
    frente = new TipoCelula;
    tras = frente;
};

FilaEncadeada::~FilaEncadeada(){
    limpa();
    delete frente;
};

void FilaEncadeada::enfileira(TipoItem item){
    TipoCelula *nova;

    nova = new TipoCelula();
    nova->item = item;
    tras->prox = nova;
    tras = nova;
    tamanho++;
};

TipoItem FilaEncadeada::desenfileira(){
    TipoCelula *p;
    TipoItem aux;


    aux = frente->prox->item;
    p = frente;
    frente = frente->prox;
    delete p;
    tamanho--;
    return aux;
};

void FilaEncadeada::imprime(){
    TipoCelula *p;

    p = frente->prox;

    while (p!=NULL)
    {
        p->item.imprime();
        p = p->prox;
    }
};

void FilaEncadeada::limpa(){
    TipoCelula *p;

    p = frente->prox;
    while (p!=NULL)
    {
       frente->prox = p->prox;
       delete p;
       p = frente->prox;
    }
    tamanho = 0;
    tras = frente;
};