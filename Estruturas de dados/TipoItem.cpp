//Código por Igor Roiz, 12/2020
/*
Implementação do TipoItem, adaptar conforme necessidade de adaptação
*/

#include <iostream>
#include "include/TipoItem.h"

//Construtores
TipoItem::TipoItem(){
    N = -1;
};

TipoItem::TipoItem(int n){
    N = n;
};


//Set, Get e Imprime
void TipoItem::setItem(int n){
    N = n;
};

int TipoItem::getItem(){
    return N;
};

void TipoItem::imprime(){
    printf("%d\n", N);
};