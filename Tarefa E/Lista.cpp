#include "Lista.h"

Lista::Lista() {
    inicio = nullptr;
    contador = 0;
}

bool Lista::vazia() {
    return inicio == nullptr;
}

bool Lista::cheia() {
     return false;
}

bool Lista::setaPosicao(int posicao, PonteiroElemento &atual) {
    atual = inicio;
    for(int i = 1 ; i < posicao ; i++) {
        atual = atual->proximoElemento;
    }    
    return true;
}

bool Lista::inserir(int posicao, int x) {
    PonteiroElemento p, atual;
    
    if (posicao < 1 or posicao > contador + 1) {
        return false;
    }

    p = new elemento;
    p->valor = x;
    
    if (posicao == 1) {
        p->proximoElemento = inicio;
        inicio = p;
    } else {
        setaPosicao(posicao - 1, atual);
        p->proximoElemento = atual->proximoElemento;
        atual->proximoElemento = p;
    }
    contador++;
    return true;    
}

bool Lista::remover(int posicao, int &x) {
    PonteiroElemento p, atual;
    
    if (posicao < 1 or posicao > contador) {
        return false;
    }

    if(posicao == 1) {
        p = inicio;
        inicio = inicio->proximoElemento;
    } else {
        setaPosicao(posicao - 1, atual);
        p = atual->proximoElemento;
        atual->proximoElemento = p->proximoElemento;
    }
    x = p->valor;
    delete p;
    contador --;
    
    return true;
}

// implementar

bool Lista::substituir(int posicao, int valor) {
    // Substitui elemento armazenado em determinada posição.
    // Esta posição deve ser um valor entre 1 (primeiro elemento da lista)
    // e contador (último elemento da lista).
    // Em caso de posição inválida retornar falso.
    // Após substituição retornar verdadeiro.
    // Seu código aqui



}

string Lista::listar() {
    // Retorna string com os elementos inseridos.
    // Formato: [1][2][3]
    // Seu código aqui



}

int Lista::tamanho() {
    // Retorna a quantidade de elementos inseridos na lista.    
    // Seu código aqui
    
    
    
}

bool Lista::retornar(int posicao, int &valor) {
    // Retorna elemento armazenado em determinada posição.
    // Esta posição deve ser um valor entre 1 (primeiro elemento da lista)
    // e contador (último elemento da lista).
    // Em caso de posição inválida retornar falso.
    // Após inserção retornar verdadeiro.
    // Seu código aqui



}

bool Lista::localizar(int &posicao, int valor) {
    // Retorna a posição de um elemento armazenado.
    // Deve ser passado o valor do elemento a ser encontrado.
    // Se o elemento for encontrado retornar verdadeiro e sua posição através do parametro posicao.
    // Se não for encontrado retornar falso e 0 através do parametro posicao.
    // A busca deve ser iniciada no primeiro elemento em direção ao último
    // Seu código aqui



}

bool Lista::localizarUltimo(int &posicao, int valor) {
    // Retorna a posição de um elemento armazenado.
    // Deve ser passado o valor do elemento a ser encontrado.
    // Se o elemento for encontrado retornar verdadeiro e sua posição através do parametro posicao.
    // Se não for encontrado retornar falso e 0 através do parametro posicao.
    // A busca deve ser iniciada no último elemento em direção ao primeiro.
    // Seu código aqui



}
