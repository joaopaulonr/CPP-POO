#pragma once
#include <iostream>
using namespace std;

class pacote{
protected:
    string nomeDestinatario, enderecoDestinatario, cidadeDestinatario, estadoDestinatario, cepDestinatario,
    nomeRemetente, enderecoRemetente, cidadeRemetente, estadoRemetente, cepRemetente;
    float peso;
    float precoKG;
public:
    pacote();
    pacote(string nd,string ed,string cd,string etd,string cepd,string nr,string er,
    string cr,string etr,string cepr,float peso, float pkg);
    double calculaCusto();
    void setNomeDestinatario(string nome);
    void setEnderecoDestinatario(string endereco);
    void setCidadeDestinatario(string cidade);
    void setEstadoDestinatario(string estado);
    void setCepDestinatario(string cep);
    void setNomeRemetente(string nome);
    void setEnderecoRemetente(string endereco);
    void setCidadeRemetente(string cidade);
    void setEstadoRemetente(string estado);
    void setCepRemetente(string cep);
    void setPeso(float peso);
    void setPrecoKG(float precoKG);
    string getNomeDestinatario();
    string getEnderecoDestinatario();
    string getCidadeDestinatario();
    string getEstadoDestinatario();
    string getCepDestinatario();
    string getNomeRemetente();
    string getEnderecoRemetente();
    string getCidadeRemetente();
    string getEstadoRemetente();
    string getCepRemetente();
    float getPeso();
    float getPrecoKG();
};