#pragma once
#include <iostream>
using namespace std;

class empresa{
protected:
    string Nome,Endereco,Cidade,Estado,Cep,Telefone;
public:
    empresa();
    empresa(string n,string e,string c,string E,string cep,string t);
    string getNome();
    void setNome(string n);
    string getEndereco();
    void setEndereco(string e);
    string getCidade();
    void setCidade(string c);
    string getEstado();
    void setEstado(string e);
    string getCep();
    void setCep(string c);
    string getTelefone();
    void setTelefone(string t);
    void Print();
};