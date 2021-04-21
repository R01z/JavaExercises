//Código por Igor Roiz, 12/2020
/* 
Lista Encadeada Simples, herda a classe abstrata Lista
*/
#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H

#include "Lista.h"
#include "TipoCelula.h"

class ListaEncadeada : public Lista{
    
    private:
        TipoCelula* primeiro; //Apontador para o primeiro item da lista
        TipoCelula* ultimo; //Apontador para o último item da lista

        //Função posiciona() é usada pelas outras funções da classe ListaEncadeada para
        //mover a lista até a célula onde as operações desejadas serão realizadas
        TipoCelula* posiciona(int pos, bool antes);
    public:
        ListaEncadeada();
        ~ListaEncadeada();

        TipoItem getItem(int pos); //Retorna item em uma posição
        void setItem(TipoItem item, int pos); //Set item de uma posição
        void insereInicio(TipoItem item); //Insere item no início da lista
        void insereFinal(TipoItem item); //insere item no final da lista
        void inserePosicao(TipoItem item, int pos); //Isere item em uma posição passada como parâmetro
        TipoItem removeInicio(); //remove e retorna item no início da lista
        TipoItem removeFinal(); //remove e retorna item no final da lista
        TipoItem removePosicao(int pos); //remove e retorna item em posição passada como parâmetro
        void imprime(); //imprime toda a lista
        void limpa(); //apaga a lista
};

#endif