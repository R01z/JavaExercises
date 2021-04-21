//Código por Igor Roiz, 12/2020
/*
Implementação da classe PilhaEncadeada
*/
#include <iostream>
#include "include/PilhaEncadeada.h"

PilhaEncadeada::PilhaEncadeada() : Pilha(){
    topo = NULL;
};

PilhaEncadeada::~PilhaEncadeada(){
    Limpa();
}

void PilhaEncadeada::empilha(TipoItem item){
    TipoCelula *nova;

    nova = new TipoCelula();
    nova->item = item;
    nova->prox = topo;
    topo = nova;
    tamanho++;
};

TipoItem PilhaEncadeada::desempilha(){
    TipoItem aux;
    TipoCelula *p;

    aux = topo->item;
    p = topo;
    topo = topo->prox;
    delete p;
    tamanho--;

    return aux;
};

void PilhaEncadeada::imprime(){
    TipoCelula *p;

    p = topo;

    while(p!=NULL){
        p->item.imprime();
        p = p->prox;
    }
};

void PilhaEncadeada::limpa(){
    while(!Vazia())
        desempilha();
};