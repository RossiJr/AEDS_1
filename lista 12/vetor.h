

class Vetor{
    private:
        int *v;                 //Armazena os elementos 
        int numElementos;       //Informação sobre o número de elementos inseridos
        int tam;
    public:
    const static int TAMANHO = 10;
    Vetor();
    int obtemTamanho();
    void insereNoFinal(int novoElemento);
    int posicaoDe(int elemento);
    void alteraEm(int pos,int novoValor);
    int elementoEm(int pos);
    void reverte();
    void imprime();
    void dobraVetor();
    };