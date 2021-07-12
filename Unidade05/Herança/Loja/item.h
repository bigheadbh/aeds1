
#ifndef ITEM_H
#define ITEM_H

/*Crie uma hierarquia de classes de domínio para uma loja que venda livros, CDs e DVDs. Sobrescreva o método toString() para que imprima:
	- Para livros: nome, preço e autor;
	- Para CDs: nome, preço e número de faixas;
	- Para DVDs: nome, preço e duração. 
	Evite ao máximo repetição de código utilizando o construtor da classe principal e no método sobrescrito. Em seguida, crie uma classe Loja com um método principal que adicione 5 produtos diferentes (a sua escolha) a um vetor e, por fim, imprima o conteúdo do vetor.
*/
#include<iostream>

using namespace std;

class Item{
    protected:
        string nome;
        float preco;
    public:
        Item();
        Item(string nome, float preco);
        string getNome();
        float getPreco();
        void setNome(string nome);
        void setPreco(float preco);
        virtual string toString();
};

class Livro: public Item{
    private:
        string autor;
    public:
        Livro();
        Livro(string nome, float preco, string autor);
        string getAutor();
        void setAutor(string autor);
        string toString();
};

class CD: public Item{
    private:
        int numfaixas;
    public:
        CD();
        CD(string nome, float preco, int numfaixas);
        int getNumFaixas();
        void setNumFaixas(int numfaixas);
        string toString();
};

class DVD: public Item{
    private:
        float duracao;
    public:
        DVD();
        DVD(string nome, float preco, float duracao);
        float getDuracao();
        void setDuracao(float duracao);
        string toString();
};

#endif // !ITEM_H