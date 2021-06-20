class Ingresso{
    private:
        float valorIngresso;
    public:
    Ingresso(float valor);
    void imprimeValor();
    void aumentarValorIngressoInicial(float valor);
};

class IngressoVIP : public Ingresso{
    private:
        float valorAdicional;
    public:
    IngressoVIP(float valorAdicional, float valorIngresso);

};

class IngressoNormal : public Ingresso{
    public:
    IngressoNormal(float valorIngresso);
};

class CamaroteInferior : public IngressoVIP{
    private:
    char *localizacaoInferior;

    public:
    CamaroteInferior(char *localizacaoInferior, float valorAdicional, float valorIngresso);
    void imprimirLocalizacaoInferior();
};
class CamaroteSuperior : public IngressoVIP{
    private:
    char *localizacaoSuperior;
    float valorAdicionalSuperior;

    public:
    CamaroteSuperior(char *localizacaoSuperior, float valorAdicional, float valorIngresso);
    void imprimirLocalizacaoSuperior();
};