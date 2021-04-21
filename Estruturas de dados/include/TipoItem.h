//Código por Igor Roiz, 12/2020
/*
A classe 'TipoItem' tem por objetivo criar os itens que serão armazenados nas células das estruturas,
Essa classe deve ser editada conforme o que se deseja guardar nas células, podendo ser tanto o item em si
quanto possuir apontadores para outros objetos e structs
*/

#ifndef TIPOITEM_H
#define TIPOITEM_H

class TipoItem
{
    private:
        //Aqui são declaradas as variáveis e/ou objetos que compõem o item, int N é apenas um exemplo
        int N;

    public:
        TipoItem();
        TipoItem(int n); //Construtor

        void setItem(int n); //Sets
        int getItem(); //gets
        void imprime(); //imprimir componentes do item
};


#endif