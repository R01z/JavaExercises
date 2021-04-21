//Código por Igor Roiz, 12/2020
/*
Implementação da ListaEncadeada
*/
#include <iostream>
#include "include/ListaEncadeada.h"

ListaEncadeada::ListaEncadeada() : Lista(){
    primeiro = new TipoCelula();
    ultimo = primeiro;
};

ListaEncadeada::~ListaEncadeada(){
    limpa();
    delete primeiro;
};

TipoCelula* ListaEncadeada::posiciona(int pos, bool antes){
    TipoCelula *p;
    int i;

    if(pos>tamanho || pos<=0) throw "ERRO: Posicao Invalida";

    p = primeiro;
    for(i=1; i<pos;i++){
        p = p->prox;
    }

    if(!antes) p = p->prox;

    return p;
};

TipoItem ListaEncadeada::getItem(int pos){
    TipoCelula *p;
    p = posiciona(pos, true);
    return p->item;
};

void ListaEncadeada::setItem(TipoItem item, int pos){
    TipoCelula *p;

    p = posiciona(pos, true);
    p->item = item;
};

void ListaEncadeada::insereInicio(TipoItem item){
    TipoCelula *nova;
    nova = new TipoCelula();

    nova->item = item;
    nova->prox = primeiro->prox;
    primeiro->prox = nova;
    tamanho++;

    if(nova->prox == NULL) ultimo = nova;
};

void ListaEncadeada::insereFinal(TipoItem item){
    TipoCelula *nova;
    nova = new TipoCelula();

    nova->item = item;
    ultimo->prox = nova;
    ultimo = nova;
    tamanho++;
}

void ListaEncadeada::inserePosicao(TipoItem item, int pos){
    TipoCelula *p, *nova;

    p = posiciona(pos,true);
    nova = new TipoCelula();

    nova->item = item;
    nova->prox = p->prox;
    p->prox = nova;
    tamanho++;

    if(nova->prox=NULL) ultimo = nova;
}

TipoItem ListaEncadeada::removeInicio(){
    TipoItem aux;
    TipoCelula *p;

    if(tamanho == 0) throw "ERRO: Lista vazia";

    p = primeiro->prox;
    aux = p->item;

    primeiro->prox = p->prox;
    tamanho--;

    if(primeiro->prox == NULL) ultimo = primeiro;
    delete p;

    return aux;
}

TipoItem ListaEncadeada::removeFinal(){
    TipoItem aux;
    TipoCelula *p;

    if(tamanho == 0) throw "ERRO: Lista vazia";

    p = posiciona(tamanho,true);

    p->prox = NULL;
    tamanho--;
    aux = ultimo->item;
    delete ultimo;
    ultimo = p;

    return aux;
}

TipoItem ListaEncadeada::removePosicao(int pos){
    TipoItem aux;
    TipoCelula *p, *q;

    throw "ERRO: Lista vazia";

    p = posiciona(pos, true);
    q = p->prox;
    p->prox = q->prox;
    tamanho--;
    aux = q->item;
    delete q;

    if(p->prox == NULL) ultimo = p;

    return aux;
};

void ListaEncadeada::imprime(){
    TipoCelula *p;
    int i = 1;
    p = primeiro->prox;

    while (p!=NULL)
    {
        printf("Celula %d:\n\n",i);
        p->item.imprime();
        p = p->prox;
        i++;
        printf("\n\n------------------------------------------------------------------------\n\n");
    }
};

void ListaEncadeada::limpa(){
    TipoCelula *p;

    p = primeiro->prox;

    while (p!=NULL){
        primeiro->prox = p->prox;
        delete p;
        p = primeiro->prox;
    }
    ultimo = primeiro;
    tamanho = 0;
};