#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(int auxValor) {
    // Inserir um arquivo na fila de impressão;
    // Altere o método inserir:
    PonteiroElemento p;
    p = new elemento;
    p->valor = auxValor;

    if (vazia()) {
        inicio = p;
        fim = p;
    } else {
        fim->proximoElemento = p;
        fim = p;
    }
    p->proximoElemento = NULL;
    return true;
}

bool Fila::remover(int &auxValor) {
    // Remover um arquivo da fila da impressão (imprimir);
    // Altere o método remover:
    PonteiroElemento p;
    if (vazia())
        return false;

    auxValor = inicio->valor;

    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}

string Fila::listar() {
	// Implementar listagem da fila de impressão;
    // Retornar string no formato:
	// <idImpressao1> - <nomeArquivo1> - <folhas1>\n
	// <idImpressao2> - <nomeArquivo2> - <folhas2>\n
	//
	// Seu código aqui	

}

bool Fila::inserirFolhas(int auxFolhas) {
    // Inserir mais folhas na impressora;
	// Seu código aqui	


    return true;
}

int Fila::listarFolhas() {
    // Retorna o total de folhas disponíveis na impressora;
	// Seu código aqui


}

