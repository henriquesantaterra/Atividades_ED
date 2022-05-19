class Lista {
    private:
        struct elemento {
            int valor;
            elemento *proximoElemento;
        };
        typedef elemento *PonteiroElemento;
        PonteiroElemento inicio;
        int contador;
    public:
        Lista();
        bool vazia();
        bool cheia();
        bool inserir(int posicao, int x);
        bool remover(int posicao, int &x);
        //implementar
        bool substituir(int posicao, int valor);
        string listar();
        int tamanho();
        bool retornar(int posicao, int &x);
        bool localizar(int &posicao, int x);
        bool localizarUltimo(int &posicao, int x);
    private:
        bool setaPosicao(int posicao, PonteiroElemento &atual);
};

