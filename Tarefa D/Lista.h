class Lista {
    private:
        int contador;
        int capacidade = MAX;
        int elementos[MAX];
    public:
        Lista();
        bool vazia();
        bool cheia();
        string listar();
        // implementar:
        bool inserir(int p, int x);
        bool remover(int p, int &x);
        bool retornar(int p, int &x);
        bool substituir(int p, int x);
};