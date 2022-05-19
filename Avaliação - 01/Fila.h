class Fila {
    private:
        struct elemento {
            int valor;
            elemento *proximoElemento;
        };
        typedef elemento *PonteiroElemento;
        PonteiroElemento inicio;
        PonteiroElemento fim;
    public:
        Fila();
        bool vazia();
        bool cheia();
        // alterar
        bool inserir(int auxValor);
        bool remover(int &auxValor);
        // implementar
        string listar();
        int listarFolhas();
        bool inserirFolhas(int auxFolhas);
        bool imprimir();
};