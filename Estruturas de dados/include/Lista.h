//Código por Igor Roiz, 12/2020
/*
Classe abstrata Lista, seus métodos são implementados pelas herdeiras, pode ser usada com
lista encadeada simples, duplamente encadeada e listas por vetores
*/

#ifndef LISTA_H
#define LISTA_H

#include "TipoItem.h"

class Lista
{
    public:
        //As 3 primeiras funções tratam apenas do atributo tamanho(inicialização, acesso e teste Vazio)
        Lista() {tamanho = 0;};
        int getTamanho() {return tamanho;};
        bool vazia() {return tamanho == 0;};

        virtual TipoItem getItem(int pos) = 0; //Retornar item passando a posição
        virtual void setItem(TipoItem item, int pos) = 0; //Setar item passando a posição e o item
        virtual void insereInicio(TipoItem item) = 0; //Inserir item na posição inicial da lista
        virtual void insereFinal(TipoItem item) = 0; //Inserir item na posição final da lista
        virtual void inserePosicao(TipoItem item) = 0; //Inserir item em uma posição específica informada
        virtual TipoItem removeInicio() = 0; //Remove primeira posição da lista, retorna seu item
        virtual TipoItem removeFinal() = 0; //Remove última posição da lista, retorna seu item
        virtual TipoItem removePosicao(int pos) = 0; //Remove posição informada, retorna seu item
        
        /*A função pesquisa retorna um dos itens da lista conforme chave desejada, essa função
        depende da implementação do TipoItem e quais chaves são possíveis de procurar. Múltiplas funções
        de pesquisa podem ser implementadas na classe filha para diferentes chaves*/
        virtual TipoItem pesquisa(int chave) = 0;

        virtual void imprime() = 0; //Imprimir lista
        virtual void limpa() = 0; //Limpar Lista

    protected:
        int tamanho; //Armazena o tamanho da lista
};

#endif